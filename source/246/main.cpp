#include <iostream>

using namespace std;

void divPrimMax(unsigned n, unsigned &p) {
  p = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      int prim = 1;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prim = 0;
        }
      }
      if (prim && i > p) {
        p = i;
      }
    }
  }
}

int main() {
  unsigned n = 2000;
  unsigned p;
  divPrimMax(n, p);
  cout << p << endl;
}
