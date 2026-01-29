#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printMatrix(double **mat, int n) 
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%f ", mat[i][j]);
        }
        printf("\n");
    }
}

// Allocate a square matrix
double **allocateMatrix(int n) { 
    double **mat = (double **)malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        mat[i] = (double *)malloc(n * sizeof(double));
    }
    return mat;
}

// Free memory of a square matrix
void freeMatrix(double **mat, int n) {
    for (int i = 0; i < n; i++) {
        free(mat[i]);
    }
    free(mat);
}

// LU decomposition using Doolittle's method (no pivoting)
void luDecomposition(double **A, double **L, double **U, int n) {
    for (int i = 0; i < n; i++) {
        // Upper Triangular
        for (int k = i; k < n; k++) {
            U[i][k] = A[i][k];
            for (int j = 0; j < i; j++) {
                U[i][k] -= L[i][j] * U[j][k];
            }
        }

        // Lower Triangular
        for (int k = i; k < n; k++) {
            if (i == k)
                L[i][i] = 1.0;
            else {
                L[k][i] = A[k][i];
                for (int j = 0; j < i; j++) {
                    L[k][i] -= L[k][j] * U[j][i];
                }
                L[k][i] /= U[i][i];
            }
        }
    }
}

// Forward substitution for Ly = b
void forwardSubstitution(double **L, double *b, double *y, int n) {
    for (int i = 0; i < n; i++) {
        y[i] = b[i];
        for (int j = 0; j < i; j++) {
            y[i] -= L[i][j] * y[j];
        }
    }
}

// Backward substitution for Ux = y
void backwardSubstitution(double **U, double *y, double *x, int n) {
    for (int i = n - 1; i >= 0; i--) {
        x[i] = y[i];
        for (int j = i + 1; j < n; j++) {
            x[i] -= U[i][j] * x[j];
        }
        x[i] /= U[i][i];
    }
}

// Read matrix from a single line input
double **readMatrix(int *n) {
    char line[1024];
    fgets(line, sizeof(line), stdin);

    int count = 0;
    char *token = strtok(line, " \t\n");
    double values[1024];

    while (token != NULL) {
        values[count++] = atof(token);
        token = strtok(NULL, " \t\n");
    }

    // Matrix is square, so size is sqrt of count
    *n = 0;
    while ((*n) * (*n) < count) (*n)++;
    if ((*n) * (*n) != count) {
        fprintf(stderr, "Invalid input: not a square matrix.\n");
        exit(1);
    }

    double **mat = allocateMatrix(*n);
    int k = 0;
    for (int i = 0; i < *n; i++) {
        for (int j = 0; j < *n; j++) {
            mat[i][j] = values[k++];
        }
    }

    return mat;
}

// Compute inverse using LU Decomposition
double **inverseMatrix(double **A, int n) {
    double **L = allocateMatrix(n);
    double **U = allocateMatrix(n);
    double **inv = allocateMatrix(n);

    luDecomposition(A, L, U, n);

    double *b = (double *)malloc(n * sizeof(double));
    double *y = (double *)malloc(n * sizeof(double));
    double *x = (double *)malloc(n * sizeof(double));

    for (int col = 0; col < n; col++) {
        // Set b as the unit vector e_col
        for (int i = 0; i < n; i++) {
            b[i] = (i == col) ? 1.0 : 0.0;
        }

        forwardSubstitution(L, b, y, n);
        backwardSubstitution(U, y, x, n);

        for (int i = 0; i < n; i++) {
            inv[i][col] = x[i];
        }
    }

    freeMatrix(L, n);
    freeMatrix(U, n);
    free(b);
    free(y);
    free(x);

    return inv;
}

int main() {
    int n;
    printf("Enter matrix row (row-major, space-separated):\n");
    double **A = readMatrix(&n);

    printf("\nInput Matrix:\n");
    printMatrix(A, n);

    double **inv = inverseMatrix(A, n);

    printf("\nInverse Matrix:\n");
    printMatrix(inv, n);

    freeMatrix(A, n);
    freeMatrix(inv, n);

    return 0;
}
