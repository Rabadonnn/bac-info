#include <iostream>

using namespace std;

int main() {
  int n;
  int k;
  cin >> n >> k;
  int a[n][n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }

  for (int i = 0; i < k - 1; i++) {
    int t = a[i][k - 1];
    a[i][k - 1] = a[k - 1][i];
    a[k - 1][i] = t;
  }

  cout << endl;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
