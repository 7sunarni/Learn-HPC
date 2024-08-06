#include <stdio.h>
#include <smmintrin.h>
#include <immintrin.h>
#include <stdint.h>


int main(){
	printf("starting...\n");
	
	__m512i s1 = _mm512_set_epi32(2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17);
	__m512i s2 = _mm512_set_epi32(0x1,0x1,1,1,1,1,1,1,1,1,1,1,1,1,1,1);

	__mmask16 mask3 = _mm512_cmpneq_epi32_mask(s1,s2);

	
	printf("%d\n", mask3);
	
	int s[16] = {};

	_mm512_mask_compressstoreu_epi32((void *)s, mask3, s1);

	for (int i = 0; i < 16; i++){
		printf("index %d value: %d\n", i, s[i]);
	}


	return 0;
}
