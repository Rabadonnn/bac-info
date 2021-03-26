#include <iostream>

using namespace std;

int main() {
  int a[] = {84, 60, 102, 24, 6};
  int n = sizeof(a) / sizeof(a[0]);

  int okay = 1;
  for (int i = 0; i < n; i++) {
    int x = a[i];
    int uc = x % 10;
    x /= 10;
    while (x) {
      if (uc == x % 10) {
        okay = 0;
      }
      x /= 10;
    }
  }

  cout << (okay ? "DA" : "NU");
}
