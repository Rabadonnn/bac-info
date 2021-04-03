#include <iostream>

using namespace std;

int main() {
  unsigned n, k;
  cin >> n >> k;

  int a[n + 1][n + 1];

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cin >> a[i][j];
    }
  }

  int t = a[k][1];
  for (int i = 1; i < k - 1; i++) {
    a[k][i] = a[k][i + 1];
  }
  a[k][k - 1] = t;

  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}