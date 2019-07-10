#include <iostream>

using namespace std;

int main() {
  int array1[10];  // empty 10 space int array

  int array2[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  // only initalize some variables
  // remaining values are 0
  int array3[10] = {1, 2, 103};

  // Access data
  char letterG = array3[2];  // 'g'

  cout << letterG << endl;

  // iterating
  int oldNumbers[] = {1, 2, 3, 4, 5};
  for (int i = 0; i < 5; i++) {
    int number = oldNumbers[i];
  }

  // Char arrays are stupid. Proof:
  char isAString[6] = { 'H', 'e', 'l', 'l', 'o', '\0'};
  // DON'T do this:
  char isNotAString[5] = { 'H', 'e', 'l', 'l', 'o'};
  cout << isAString << endl;
  cout << isNotAString << endl;

  // if "\0" (null character) is not included, errors can follow

  // Usually, "string"s are used:
  string greeting = "Howdy!";
  cout << greeting << endl;
}