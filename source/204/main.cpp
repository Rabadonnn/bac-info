#include <iostream>

using namespace std;

int nrprime(unsigned int n) {
  int nr = 0;
  while (n) {
    int c = n % 10;
    n /= 10;
    int prim = 1;
    for (int i = 2; i < c; i++) {
      if (c % i == 0) {
        prim = 0;
        break;
      }
    }
    if (c == 1 || c == 0) {
      prim = 0;
    }
    if (prim) {
      nr++;
    }
  }
  return nr;
}

int main() { cout << nrprime(1233405) << endl; }
