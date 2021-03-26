#include <iostream>

using namespace std;

int main() {
  int a[] = {100, 315, 507, 160, 375, 843};
  int n = sizeof(a) / sizeof(a[0]);
  int b[n * 2];

  int gasit = 0;
  int j = 0;
  for (int i = 0; i < n; i++) {
    int x = a[i];
    int cifImp = 1;
    while (x) {
      int c = x % 10;
      x /= 10;
      if (c % 2 == 0) {
        cifImp = 0;
        break;
      }
    }
    b[j++] = a[i];
    if (cifImp) {
      b[j++] = a[i];
    }
  }

  for (int i = 0; i < j; i++) {
    cout << b[i] << " ";
  }
}
