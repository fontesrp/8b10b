#ifndef _STDLIB_H_
#include <stdlib.h>
#endif

#ifndef __MATH_H__
#include <math.h>
#endif

unsigned char * binary(unsigned int dec, char bits) {

	unsigned char *bin;

	if (bits == 0)
		bits = ((unsigned char) log2((double) dec)) + 1;

	bin = (unsigned char *) malloc((bits + 1) * sizeof(unsigned char));

	bin[bits] = '\0';

	for (bits--; bits >= 0; bits--) {
		bin[bits] = dec % 2 + '0';
		dec /= 2;
	}

	return bin;
}

void freeArr(void * arr) {
	free(arr);
}
