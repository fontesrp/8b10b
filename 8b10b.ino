/* ---------- Variáveis globais necessárias para a codificação ---------- */
unsigned char xTable[32], yTable[9];
char rd;

struct flag3B {
  char inv, y7Neg, y7Pos;
};
/* ---------------------------------------------------------------------- */

unsigned int inX, inY;

void setup() {
  
  setup8B10B();
  inX = inY = 0;
  Serial.begin(9600);
  Serial.print("    \t Y \t  X  \tCURRENT RD- \tCURRENT RD+ \t  \n");
  Serial.print("DX.Y\tHGF\tEDCBA\tabcdei\tfghj\tabcdei\tfghj\tRD-\tRD+\n");
}

void loop() {
  
  unsigned int input, output;
  unsigned int a, f;
  char r;

  Serial.print('D');
  Serial.print(inX, DEC);
  Serial.print('.');
  Serial.print(inY, DEC);
  Serial.print('\t');
  Serial.print(inY, BIN);
  Serial.print('\t');
  Serial.print(inX, BIN);
  Serial.print('\t');

  rd = -1;
  input = (inY << 5) | inX;
  output = encode8B10B(input);

  a = (output & 0x3F0) >> 4;
  f = output & 0xF;

  Serial.print(a, BIN);
  Serial.print('\t');
  Serial.print(f, BIN);
  Serial.print('\t');

  r = rd = 1;
  output = encode8B10B(input);

  a = (output & 0x3F0) >> 4;
  f = output & 0xF;

  Serial.print(a, BIN);
  Serial.print('\t');
  Serial.print(f, BIN);
  Serial.print('\t');

  if (r == rd)
    Serial.print("same\n");
  else
    Serial.print("flip\n");

  if (++inY == 8) {
    inY = 0;
    inX++;
  }
  
  if (inX >= 32)
    while (1)
      ;
}

