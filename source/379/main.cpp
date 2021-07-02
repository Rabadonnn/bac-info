#include <iostream>

using namespace std;

int nrfp(int n) {
  int m = 0;
  int fm = 0;

  for (int i = 2; i <= n; i++) {
    int f = 0;

    for (int j = 2; j <= i; j++) {
      if (i % j == 0) {

        bool prim = true;
        for (int k = 2; k <= j / 2; k++) {
          if (j % k == 0) {
            prim = false;
            break;
          }
        }

        if (prim) {
          f++;
        }
      }
    }

    if (f > fm) {
      fm = f;
      m = i;
    }
    if (f == fm && i > m) {
      m = i;
    }
  }

  return m;
}

int main() {
  cout << nrfp(100) << endl;
}
