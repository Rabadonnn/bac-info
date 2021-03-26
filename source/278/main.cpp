#include <iostream>

using namespace std;

int main() {
  int m = 7;
  int n = 3;
  int k = 2;

  int a[7][3] = {
      {0, 1, 0},
      {1, 1, 0},
      {0, 0, 0},
      {0, 0, 1},
      {0, 0, 1},
      {1, 1, 1},
      {0, 0, 1}};

  int result = 0;

  for (int i = 0; i < m; i++) {
    if (i != k - 1) {
      bool okay = 1;
      for (int j = 0; j < n; j++) {
        if (a[i][j] == a[k - 1][j]) {
          okay = 0;
          break;
        }
      }
      if (okay) {
        result = 1;
        break;
      }
    }
  }

  if (!result) {
    cout << "NU" << endl;
  } else {
    cout << "DA" << endl;
  }
}