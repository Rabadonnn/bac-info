#include <iostream>

using namespace std;

int armonie(int x, int y) {
  int max = x;
  if (y > max) {
    max = y;
  }

  int sx = 0;
  int sy = 0;

  for (int i = 1; i <= max; i++) {
    if (x % i == 0) {
      sx += i;
    }
    if (x % i == 0) {
      sy += i;
    }
  }

  if (sx > sy) {
    return x + y > sy && x + y < sx;
  }

  return x + y > sx && x + y < sy;
}

int main() {
  cout << armonie(8, 13) << endl;
}
