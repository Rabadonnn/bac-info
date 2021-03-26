#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;
  int p = 1;
  int y = 0;

  do {
    int c = x % 10;
    x /= 10;
    if (c != 0) {
      if (x % 10 < c) {
        y = y * 10 + c;
      } else {
        y = c * p + y;
      }
      p *= 10;
    }
  } while (x != 0);

  cout << y << endl;
}