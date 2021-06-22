#include <iostream>

using namespace std;

void nrfp(int n, int &m) {
  m = 0;
  int max = 0;

  for (int i = 2; i <= n; i++) {
    int c = 0;

    for (int j = 2; j <= i / 2; j++) {
      int prim = 1;

      for (int k = 2; k <= j / 2; k++) {
        if (j % k == 0) {
          prim = 0;
          break;
        }
      }

      if (prim && ++c > max) {
        max = c;
        m = i;
      }
    }
  }
}

int main() {
  int m;
  nrfp(100, m);
  cout << m << endl;
}