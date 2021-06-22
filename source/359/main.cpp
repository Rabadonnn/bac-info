#include <iostream>
#include <cmath>

using namespace std;

int frate(int x) {
  int y = 0;
  int l = 0;

  while (x) {
    int c = x % 10;

    if (c == 9) {
      return -1;
    }

    y = pow(10, l++) * (++c)+ y;

    x /= 10;
  }

  return y;
}

int main() {
  cout << frate(1027) << endl;
}
