# avx512f avx512dq avx512cd avx512bw avx512vl
gcc  -std=c99 -mavx -mavx2 -mavx512f -mavx512dq -mavx512cd -mavx512bw -mavx512vl -o play filter_array.c -lm; ./play
