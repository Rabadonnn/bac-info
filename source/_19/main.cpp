#include <iostream>

using namespace std;

// https://www.modinfo.ro/bac/variante-test-info/v11.pdf s2 3

int main() {
  int a[7][7] = {{1, 8, 3, 9, 6, 5, 5}, {0, 7, 4, 2, 5, 5, 4},
                 {8, 6, 3, 5, 1, 2, 3}, {2, 4, 9, 4, 8, 3, 4},
                 {2, 1, 7, 5, 5, 5, 6}, {7, 4, 2, 4, 9, 2, 7},
                 {0, 9, 6, 3, 1, 7, 2}};

  int p = 1;
  for (int i = 0; i < 7; i++) {
    p *= a[i][i];
  }

  for (int i = 6; i >= 0; i--) {
    cout << p << " ";
    p /= a[i][i];
  }
}
