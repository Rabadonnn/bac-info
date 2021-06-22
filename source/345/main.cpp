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

  int okay = 0;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 1; j < m; j++) {
      if (a[0][i] == a[j][n - 1]) {
        okay = 1;
        cout << a[0][i] << " ";
        break;
      }
    }
  }

  if (!okay) {
    cout << "nu exista" << endl;
  }
}
