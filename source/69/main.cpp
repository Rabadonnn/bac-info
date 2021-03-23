#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int x = 0;
  int m = 0;
  int p = 1;

  while (x < 10) {
    int cn = n;
    while (cn != 0) {
      int c = cn % 10;
      cn /= 10;
      if (c == x) {
        m = c * p + m;
        p *= 10;
      }
    }
    x += 2;
  }

  cout << m << endl;
}
