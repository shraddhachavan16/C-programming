#ifndef LU_DECOMPOSITION_HPP
#define LU_DECOMPOSITION_HPP

#include "LinearSystem.hpp"

// ============================================================
// Method 1: Doolittle LU  (L has unit diagonal, U is upper)
// ============================================================
class LUDoolittle : public LinearSystem {
public:
    LUDoolittle();
    LUDoolittle(const Matrix &m);
    void solve(ofstream &fout) override;
};

// ============================================================
// Method 2: Crout LU  (U has unit diagonal, L is lower)
// ============================================================
class LUCrout : public LinearSystem {
public:
    LUCrout();
    LUCrout(const Matrix &m);
    void solve(ofstream &fout) override;
};

// ============================================================
// Method 3: Cholesky LU  (A = L * L^T)
// ============================================================
class LUCholesky : public LinearSystem {
public:
    LUCholesky();
    LUCholesky(const Matrix &m);
    void solve(ofstream &fout) override;
};

#endif
