#include <iostream>

using namespace std;

int main() {
  // NOTE:
  // Compilers will give warnings for most of the lines

  int i { 2 };
  i = 3.2; // --> 3
  i = 2.9; // truncate to 2
  i = -1;

  unsigned int u{0};
  // 
  u = -2; // doesn't do what you expect!

  double d { 2.7 };
  i = d; // 2
  d = i; // 2.00000 (exact accuracy bc it was from an int ^)
  
  bool flag { true };
  flag = false;
  flag = 7; // true (zero only is false!)

  return 0;
}
