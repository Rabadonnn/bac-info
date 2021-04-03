#include <iostream>

using namespace std;

int suma(long n) {
  int s = 0;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      bool prim = true;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prim = false;
          break;
        }
      }
      if (prim) {
        s += i;
      }
    }
  }
  return s;
}

int main() { cout << suma(12) << endl; }