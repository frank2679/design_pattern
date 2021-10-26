

#include "gemm.h"

#define IMPL_GEMM(api_name_, T_)                                               \
    SUBLAS_API sublasStatus_t api_name_(                                       \
        sublasHandle_t handle, sublasOperation_t transA,                       \
        sublasOperation_t transB, int m, int n, int k, const float *alpha,     \
        const float *A, int lda, const float *B, int ldb, const float *beta,   \
        float *C, int ldc) {                                                   \
        return gemmApiTemplate<T_>(handle, transA, transB, m, n, k, alpha, A,  \
                                   lda, B, ldb, beta, C, ldc, #api_name_,      \
                                   "gemm");                                    \
    }

IMPL_GEMM(sublasSgemm, float);