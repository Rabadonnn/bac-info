#include <iostream>

using namespace std;

int main() {
  long x;
  cin >> x;

  while (x >= 1) {
    cout << x << " ";
    if (x <= 10 || (x % 2 == 1 && x > 10)) {
      x--;
    } else {
      x /= 2;
    }
  }
}