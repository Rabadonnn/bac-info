#include <iostream>

using namespace std;

int f(int x, int y) {
  if (x > y) {
    return x / y + f(x - y, y);
  }
  if (y > x) {
    return y / x + f(x, y - x);
  }
  return 1;
}

int main() { cout << f(10, 16); }
