#include <iostream>

using namespace std;

enum Day { Sunday = 1, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

const string weekdays[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

int main() {
  Day payDay;

  payDay = Thursday;

  cout << "My payday is " << weekdays[payDay-1] << '.' << endl;

  return 0;
}