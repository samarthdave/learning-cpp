#include <iostream>

using namespace std;

struct coffeeBean {
  string name;
  string country;
  int strength;
};

int main() {
  // a Structure is like a user defined type (different from class)
  coffeeBean myBean = { "Strata", "Colombia", 10 };
  // init but don't assign
  coffeeBean newBean;

  // give custom values
  newBean.name = "Flora";
  newBean.country = "Mexico";
  newBean.strength = 9;
  cout << "Coffee bean " + newBean.name + " is from " + newBean.country << endl;

  return 0;
}