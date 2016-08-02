/* ------- main ------- */

#include "header.h"

void setup() {
	rd = -1;
	inX = inY = 0;
	createEncodeTables();
}

void printDencodingSwitch() {

	unsigned int outputPos, outputNeg;
	char oldRD;

	for (input8B = 0; input8B < 256; input8B++) {

		oldRD = rd = -1;
		outputNeg = encode8B10B(input8B);
		oldRD = (oldRD == rd);

		rd = 1;
		outputPos = encode8B10B(input8B);

		if (outputNeg != outputPos) {
			printf("\t\tcase %uu:\n", outputNeg);
		}

		printf("\t\tcase %uu:\n", outputPos);
		printf("\t\t\treturn %uu;\n", input8B);
		printf("\t\t\tbreak;\n");
	}
}

void printEncodingSwitchStatement() {

	unsigned int outputPos, outputNeg;
	char oldRD;

	for (input8B = 0; input8B < 256; input8B++) {

		oldRD = rd = -1;
		outputNeg = encode8B10B(input8B);
		oldRD = (oldRD == rd);

		rd = 1;
		outputPos = encode8B10B(input8B);

		printf("\t\tcase %uu:\n", input8B);

		if (!oldRD) {
			printf("\t\t\trd *= -1;\n");
		}

		if (outputNeg == outputPos) {
			printf("\t\t\treturn %uu;\n", outputNeg);
		} else if (!oldRD) {
			printf("\t\t\treturn (rd > 0 ? %uu : %uu);\n", outputNeg, outputPos);
		} else {
			printf("\t\t\treturn (rd < 0 ? %uu : %uu);\n", outputNeg, outputPos);
		}

		printf("\t\t\tbreak;\n");
	}
}

void printEncodingTruthTable() {

	// Variable 'a' stands for bits 'abcdei' of the output; 'f' stands for the bits 'fghj'
	// Both 'a' and 'f' could be 'unsigned char', using 'unsigned int' to avoid conversion in binary()
	unsigned int output, a, f;
	unsigned char * binaryStr, input;
	char oldRdNeg, oldRdPos;

	printf("    \t Y \t  X  \tCURRENT RD- \tCURRENT RD+ \t  \n");
	printf("DX.Y\tHGF\tEDCBA\tabcdei\tfghj\tabcdei\tfghj\tRD-\tRD+\n");

	while (inX < 32) {

		printf("D%u.%u\t", inX, inY);

		binaryStr = binary(inY, 3);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		binaryStr = binary(inX, 5);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		oldRdNeg = rd = -1;

		input = (inY << 5) | inX;
		output = encode8B10B(input);

		a = (output & 0x3F0) >> 4;
		f = output & 0xF;

		binaryStr = binary(a, 6);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		binaryStr = binary(f, 4);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		oldRdNeg = (oldRdNeg == rd);
		oldRdPos = rd = 1;

		output = encode8B10B(input);

		if (++inY == 8) {
			inY = 0;
			inX++;
		}

		a = (output & 0x3F0) >> 4;
		f = output & 0xF;

		binaryStr = binary(a, 6);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		binaryStr = binary(f, 4);
		printf("%s\t", binaryStr);
		freeArr(binaryStr);

		printf(oldRdNeg ? "same\t" : "flip\t");
		printf(oldRdPos == rd ? "same\n" : "flip\n");
	}
}

int main(int argc, const char * argv[]) {

	setup();

	// printEncodingTruthTable();

	// printEncodingSwitchStatement();

	printDencodingSwitch();

	return 0;
}

/* -------------------- */
