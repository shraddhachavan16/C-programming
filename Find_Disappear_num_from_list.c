#include <stdio.h>

int main()
{
    int n;

    // Ask user for size of array
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];       // Original array
    int hash[n + 1];  // Hash table (index = number, value = count)

    // Initialize hash table with 0
    // Means: first, no number is present
    for (int i = 1; i <= n; i++)
    {
        hash[i] = 0;
    }

    // Take array input from user
    printf("Enter %d numbers (from 1 to %d):\n", n, n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        // Increase count for that number
        // Example: if arr[i] = 3, then hash[3]++
        hash[arr[i]]++;
    }

    // Check which numbers are missing
    printf("\nMissing numbers are: ");

    int found = 0; // To check if any missing number exists

    for (int i = 1; i <= n; i++)
    {
        // If count is 0, number never appeared
        if (hash[i] == 0)
        {
            printf("%d ", i);
            found = 1;
        }
    }

    // If no missing number found
    if (found == 0)
    {
        printf("None");
    }

    return 0;
}
