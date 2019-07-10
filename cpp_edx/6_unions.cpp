#include <iostream>

using namespace std;

int main() {
  // "A union, in C++, is similar to a structure in that it can store multiple,
  // ...disparate data types. The differentiation is that a union can only
  // store one piece of data at a time. What does that signify?"
  // Example:
  
  union numericUnion {
    int intValue;
    long longValue;
    double doubleValue;
  };

  numericUnion myUnion;
  myUnion.intValue = 3;
  cout << myUnion.intValue << endl;
  // set a diff variable
  myUnion.doubleValue = 4.5;
  cout << myUnion.doubleValue << endl;
  // prints 0 bc it can only store 1 value
  cout << myUnion.intValue;
  cout << endl;

  return 0;
}