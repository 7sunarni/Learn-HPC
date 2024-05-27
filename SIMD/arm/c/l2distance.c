#include <arm_neon.h>
#include <stdio.h>
#include <math.h>

int main()
{
    float32x4_t a1 = {9.0f, 8.0f, 7.0f, 6.0f};
    float32x4_t a2 = {4.0f, 3.0f, 2.0f, 1.0f};
    float32x4_t sub = vsubq_f32(a1, a2);
    float32x4_t mul = vmulq_f32(sub, sub);
    float ret = 0;
    for (int i = 0; i < 4; i++)
    {
        ret = ret + mul[i];
    }
    print("%f\n", sqrt(ret));
}
