#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int k;
  cin >> k;

  int a[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  int t = a[k - 1][n - k - 1];
  for (int i = n - k - 1; i >= 0; i--) {
    a[k - 1][i] = a[k - 1][i - 1];
  }
  a[k - 1][0] = t;

  cout << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
