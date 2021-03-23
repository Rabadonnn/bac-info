#include <iostream>

using namespace std;

void putere(int n, int &d, int &p) {
  int maxp = 0;
  d = 0;
  for (int i = 2; i <= n / 2; i++) {
    bool prim = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = false;
        break;
      }
    }
    if (prim) {
      p = 0;
      int x = n;
      while (x) {
        if (x % i == 0) {
          x /= i;
          p++;
        } else {
          break;
        }
      }
      if (p >= maxp && i > d) {
        maxp = p;
        d = i;
      }
    }
  }
  p = maxp;
}

int main() {
  int n = 10780;
  int d;
  int p;
  putere(n, d, p);
  cout << d << " " << p << endl;
}
