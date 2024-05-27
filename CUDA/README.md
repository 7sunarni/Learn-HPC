# cuda example

## calculate two point l2 distance
```shell
point1: (a1, a2, a3, a4)
point2: (b1, b2, b3, b4)
l2 = sqrt((a1-b1)^2 + (a2-b2)^2 + (a3-b3)^2 + (a4-b5)^2)
```

## run
```shell
nvcc main.cu -o run ; ./run
```

