#include <iostream>

using namespace std;

int main() {

  int n;
  cin >> n;
  int x = 1;
  int y = n;
  int d = 2;

  while (x < y) {
    if (n % d == 0) {
      x = d;
      y = n / d;
    }
    d++;
  }

  if (x == y) {
    cout << "D" << x;
  } else {
    cout << "N";
  }

  // a. D10
  // b. 2 3 5 6 7 8
}
