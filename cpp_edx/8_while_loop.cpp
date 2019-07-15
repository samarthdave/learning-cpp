#include <iostream>

using namespace std;

void queryUser();

int main() {
  // initialize user input variable
  string userResponse = "";

  do {
    // use function to print menu
    queryUser();
    // save input to string
    cin >> userResponse;
  } while (userResponse != "Quit");

}

void queryUser() {
  cout << "Enter menu choice: " << endl;
  cout << "More" << endl << "Quit" << endl;
  cout << "--------" << endl;
}