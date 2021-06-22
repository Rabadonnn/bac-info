#include <iostream>

using namespace std;

int armonie(int x, int y) {
  int sx = 0;
  int sy = 0;

  for (int i = 1; i <= x; i++) {
    if (x % i == 0) {
      sx += i;
    }
  }

  for (int i = 1; i <= y; i++) {
    if (y % i == 0) {
      sy += i;
    }
  }

  return x + y > sx && x + y < sy;
}

int main() {
  cout << armonie(8, 13) << endl;
}
