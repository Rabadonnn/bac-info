#include <iostream>

using namespace std;

void divPrimMax(unsigned n, int &p) {
  for (int i = n; i >= 2; i--) {
    if (n % i == 0) {
      int prim = 1;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prim = 0;
        }
      }
      if (prim) {
        p = i;
        break;
      }
    }
  }
}

int main() {
  int p;
  divPrimMax(2000, p);
  cout << p << endl;
}
