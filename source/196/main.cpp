#include <iostream>

using namespace std;

int main() {
  int m = 4;
  int n = 5;
  int a[4][5] = {
      {1, 2, 4, 2, 1},
      {3, 5, 5, 5, 3},
      {2, 4, 1, 4, 2},
      {1, 1, 1, 1, 1},
  };

  int okay = 1;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n / 2; j++) {
      if (a[i][j] != a[i][n - j - 1]) {
        okay = 0;
        cout << "NU" << endl;
        break;
      }
    }
  }
  if (okay) {
    cout << "DA" << endl;
  }
}
