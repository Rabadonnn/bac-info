#include <iostream>

using namespace std;

int imog(long x, long y) {
  long t = 0;
  long z = 0;

  while (x) {
    if ((x % 10) % 2 == 1) {
      t = t * 10 + x % 10;
    }
    x /= 10;
  }

  while (y) {
    if ((y % 10) % 2 == 1) {
      z = z * 10 + y % 10;
    }
    y /= 10;
  }

  long v = 0;
  while (z) {
    v = v * 10 + z % 10;
    z /= 10;
  }

  return t == v;
}

int main() {
  cout << imog(523, 84356) << endl;
}
