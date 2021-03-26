#include <iostream>

using namespace std;

int f(int x, int y) {
  if (x == y) {
    return x;
  } else if (x - y > 0) {
    return f(x - y, y);
  } else {
    return f(x, y - x);
  }
}

int main() {
  cout << f(50, 2020);
}