#include <iostream>

using namespace std;

unsigned suma(unsigned n) {
  int s = 1 + n;
  for (int i = 4; i <= n / 2; i++) {
    bool prim = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = false;
      }
    }
    if (!prim) {
      s += i;
    }
  }
  return s;
}

int main() {
  cout << suma(12) << endl;
}
