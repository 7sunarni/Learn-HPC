#include <immintrin.h>
#include <stdio.h>
#include <time.h>
#include <stdint.h>
#include <math.h>

int main()
{
    __m256d a1 = _mm256_set_pd(9.0f, 8.0f, 7.0f, 6.0f);
    __m256d a2 = _mm256_set_pd(4.0f, 3.0f, 2.0f, 1.0f);
    __m256d vc = _mm256_sub_pd(a1, a2);
    __m256d sq = _mm256_mul_pd(vc, vc);

    double elem[4];
    _mm256_storeu_pd(elem, sq);
    printf("[%f, %f, %f, %f]\n", elem[0], elem[1], elem[2], elem[3]);

    double ret = elem[0] + elem[1] + elem[2] + elem[3];
    double a = sqrt(ret);

    printf("%f\n", a);

    return 0;
}

// debug
void show(__m256d a)
{
    double elem[4];
    _mm256_storeu_pd(elem, a);
    printf("[%f, %f, %f, %f]\n", elem[0], elem[1], elem[2], elem[3]);
}
