#include <iostream>

using namespace std;

void prime(unsigned n, unsigned &x, unsigned &y) {
  x = 0;
  y = 0;
  for (int i = n - 1; i >= 2; i--) {
    int prim = 1;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = 0;
      }
    }
    if (prim == 1) {
      if (y == 0) {
        y = i;
      } else if (x == 0) {
        x = i;
        break;
      }
    }
  }
}

int main()
{
  unsigned n = 49;
  unsigned x;
  unsigned y;
  prime(n, x, y);
  cout << x << " " << y << endl;
}
