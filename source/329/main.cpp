#include <iostream>

using namespace std;

int main() {
  int x;
  cin >> x;
  int n = 0;

  while (x != 0) {
    int y = x;
    int c = 0;

    while (y > 0) {
      if (y % 10 > c) {
        c = y % 10;
      }
      y /= 10;
    }
    n = n * 10 + c;
    cin >> x;
  }
  cout << n;
}