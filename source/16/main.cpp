#include <iostream>

using namespace std;

int main() {
  int n = 4;
  int a[] = {7, 2, 5, 3};
  int b[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j % 2 == 1) {
        b[i][j] = a[i];
      } else {
        b[i][j] = a[n - i - 1];
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << b[i][j] << " ";
    }
    cout << endl;
  }
}
