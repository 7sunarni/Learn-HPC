# x86 simd example

## calculate two point l2 distance
```shell
point1: (a1, a2, a3, a4)
point2: (b1, b2, b3, b4)
l2 = sqrt((a1-b1)^2 + (a2-b2)^2 + (a3-b3)^2 + (a4-b5)^2)
```

## run
```shell
gcc  -std=c99 -mavx -o run l2distance.c -lm; ./run
```

## other
`_mm256_` can be find in [https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html](https://www.intel.com/content/www/us/en/docs/intrinsics-guide/index.html)
