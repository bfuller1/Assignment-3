#include "readFile.h"
#include <iostream>

using namespace std;
//#include "GenStack.h"

int main(int argc, char **argv) { // main class meant to access the ReadFile
  string fileName = "";
  if (argc > 1) {
    fileName = argv[1];
  }
  readFile *rf = new ReadFile();
  rf->ReadFile(fileName);
  delete rf;

  return 0;
}
