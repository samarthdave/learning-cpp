int main() {
  int i { 4 };
  const int j = 6; // const int j { 6 };

  // ERROR: can't modify j bc its a const
  // j = i + 2;

  return 0;
}