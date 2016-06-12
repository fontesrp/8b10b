unsigned int encode8B10B(unsigned char data) {

  unsigned char rdSignal;
  
  rdSignal = (rd < 0 ? 0 : 1);
  
  rd *= searchTable[data][2];
  
  return searchTable[data][rdSignal];
}

void setup8B10B(void) {
  rd = -1; // rd deve sempre começar como -1
  createSearchTable();
}

