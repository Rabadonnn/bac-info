#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int s = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (j != n - 1 && j > i && i > n - j - 1) {
        s += a[i][j];
      }
    }
  }

  cout << s << endl;
  return 0;
}
