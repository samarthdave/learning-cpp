#include <iostream>
#include "Log.h"

void Log(const char* message) {
  std::cout << message << std::endl;
}

int main() {
  InitLog();
  Log("Hello World!");

  return 0;
}