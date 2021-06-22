#include <iostream>

using namespace std;

int main() {
  int m;
  int n;
  cin >> m;
  cin >> n;

  int a[m][n];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < m; i++) {
    int max = -1;
    for (int j = 0; j < n; j++) {
      if (a[i][j] < 21 && a[i][j] > max) {
        max = a[i][j];
      }
    }
    if (max != -1) {
      cout << max << endl;
    } else {
      cout << "nu exista" << endl;
    }
  }
}
