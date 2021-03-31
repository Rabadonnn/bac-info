#include <iostream>

using namespace std;

void prodprim(long n, int &p) {
  p = 1;
  for (int i = 2; i <= n / 2; i++) {
    int prim = 1;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = 0;
        break;
      }
    }
    if (prim && n % i == 0) {
      p *= i;
    }
  }
}

int main() {
  int p;
  prodprim(2000, p);
  cout << p << endl;
}
