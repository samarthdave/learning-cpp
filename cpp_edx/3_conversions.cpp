#include <iostream>

int main() {
  // basic mistakes:
  int g { 3 / 2}; // expect 1.5 but is actually 1
  auto j { 3 / 2 }; // still 1
  double k { 3 / 2 }; // still 1.0000...
  double l = { 3.0 / 2}; // finally... --> 1.5

  int i { 2 };

  i = static_cast<int>(3.2); // 3
  i = static_cast<int>(2.9); // 2
  i = -1;

  std::cout << i << std::endl;

  double d { 2.7 };
  std::cout << d << std::endl;
  i = static_cast<int>(d);
  d = i; // 2.0000... (exact value)

  return 0;
}