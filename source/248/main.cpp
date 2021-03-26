#include <iostream>

using namespace std;

void putere(unsigned n, unsigned &d, unsigned &p) {
  p = 0;
  d = 0;
  for (int i = 2; i <= n / 2; i++) {
    // verifica daca e divizor
    if (n % i == 0) {
      // verifica daca e prim
      int prim = 1;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prim = 0;
        }
      }
      if (prim) {
        int cp = 0;
        int x = n;
        while (x) {
          cp++;
          x /= i;
          if (x % i != 0) {
            break;
          }
        }
        if (cp >= p) {
          p = cp;
          d = i;
        }
      }
    }
  }
}

int main() {
  unsigned n = 10780;
  unsigned p;
  unsigned d;

  putere(n, d, p);

  cout << d << " " << p << endl;
}
