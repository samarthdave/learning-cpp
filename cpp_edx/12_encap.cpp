#include <iostream>

using namespace std;

class Rectangle {
private:
  // member variables (denoted with underscore!)
  int _width;
  int _height;

public:
  // --------------------
  //     CONSTRUCTORS
  // --------------------
  // default
  Rectangle()
    : _width{}, _height{}
  {}
  // pass in values:
  Rectangle(int init_width, int init_height)
    : _width{init_width}, _height{init_height}
  {}

  // --------------------
  //   MEMBER FUNCTION
  // --------------------
  // "this" keyword isn't required (most ppl don't use it)
  // int get_area() { return this->_width * this->_height; }
  int get_area() { return _width * _height; }
  // Getters/Accessors are public
  int get_height() { return _height; }
  int get_width() { return _width; }
  // Setters/Mutators
  void resize(int new_width, int new_height) {
    _width = new_width;
    _height = new_height;
  }
};

int main() {
  Rectangle a_rectangle; // calls default construcotr

  int a_rect_area{a_rectangle.get_area()}; // 0
  cout << "A Area: " << a_rect_area << endl;

  Rectangle b_rectangle{}; // width == 0, height == 0
  // resize b and print it out
  cout << "B Area (before resize) " << b_rectangle.get_area() << endl;
  b_rectangle.resize(10,5);
  cout << "B Area (after resize) " << b_rectangle.get_area() << endl;

  // C area initialization
  Rectangle c_rectangle{2,3}; // width == 2, height == 3
  int c_rect_area{c_rectangle.get_area()}; // 0
  cout << "C Area: " << c_rect_area << endl;

  return 0;
}