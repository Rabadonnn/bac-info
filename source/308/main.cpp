#include <iostream>

using namespace std;

int main() {
  unsigned m, n;
  cin >> m >> n;
  int a[m][n];
  int okay = 0;

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      if (a[i][0] == a[j][n - 1]) {
        okay = 1;
        cout << a[i][0] << " ";
        break;
      }
    }
  }

  if (!okay) {
    cout << "nepolarizate" << endl;
  }
}
