#include <iostream>

using namespace std;

int main() {
  int m;
  int n;
  cin >> m >> n;

  int a[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    if (a[i][0] == 0) {
      continue;
    }

    for (int j = 0; j < m; j++) {
      if (a[i][0] == a[j][n - 1]) {
        cout << a[i][0] << " ";
        break;
      }
    }
  }
}
