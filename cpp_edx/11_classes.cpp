#include <iostream>

using namespace std;

class Rectangle {
  // underscore naming method for MEMBER variables!
  public:
    int _width;
    int _height;
};

int main() {
  Rectangle smallRectangle;

  smallRectangle._height = 5;
  smallRectangle._width = 6;

  cout << smallRectangle._width << " -- " << smallRectangle._height << endl;

  // Initialization Defaults:
  int x {}; // int x = 0

  Rectangle small_rectangle {}; // _width = 0, _height = 0
}