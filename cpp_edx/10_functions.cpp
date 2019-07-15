#include <iostream>

using namespace std;

// declare function names
int Sum(int a, int b);

int main() {
  int a = 5;
  int b = 7;

  cout << "A + b is " << Sum(a, b) << endl;

  return 0;
}

// inline: compiler places a copy of the code of that function at
// each point where the function is called at compile time
inline int Sum(int a, int b) {
  return a + b;
}