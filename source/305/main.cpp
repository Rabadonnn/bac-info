#include <iostream>

using namespace std;

int main() {
  unsigned m, n;
  cin >> m >> n;
  int a[m + 1][n + 1];

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      a[i][j] = (i * j) % 10;
    }
  }

  for (int i = 1; i <= m; i++) {
    for (int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
