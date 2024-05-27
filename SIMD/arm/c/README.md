# arm simd example

## calculate two point l2 distance
```shell
point1: (a1, a2, a3, a4)
point2: (b1, b2, b3, b4)
l2 = sqrt((a1-b1)^2 + (a2-b2)^2 + (a3-b3)^2 + (a4-b5)^2)
```

## run
```shell
gcc  -o run l2distance.c -lm; ./run
```

## other
`Intrinsics` can be find in [https://developer.arm.com/documentation/ihi0073/a/?resultof=%22%76%6d%6f%76%71%5f%6e%5f%66%33%32%22%20](https://developer.arm.com/documentation/ihi0073/a/?resultof=%22%76%6d%6f%76%71%5f%6e%5f%66%33%32%22%20)
