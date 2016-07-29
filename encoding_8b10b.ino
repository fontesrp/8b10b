#include "encoding_8b10b.h"

void setup() {
	setup8B10B();
	randomSeed(analogRead(0));
}

void loop() {

	unsigned char input;
	unsigned int output;

	input = random(0x00, 0xFF);
	output = encode8B10B(input);

	Serial.print("main loop: input = ");
	Serial.print(input, DEC);
	Serial.println("");
	Serial.print("main loop: output = ");
	Serial.print(output, DEC);
	Serial.println("");

	delay(10000);
}
