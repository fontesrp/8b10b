#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>

void createEncodeTables(void);
unsigned int encode8B10B(unsigned char data);

void freeArr(void * bin);
unsigned char * binary(unsigned int dec, char bits);

struct flag3B {
    char inv, y7Neg, y7Pos;
};

unsigned char xTable[32], yTable[9];
unsigned int inX, inY, input8B;
char rd;

#endif
