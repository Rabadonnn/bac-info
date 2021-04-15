#include <iostream>

using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  int a[n * k + 1][n];

  for (int i = 1; i <= n; i++) {
    int x = 1;
    for (int j = 1; j <= n; j++) {
      for (int m = 1; m <= k; m++) {
        a[x++][i] = j + i - 1;
      }
    }
  }

  for (int i = 1; i <= n * k; i++) {
    for (int j = 1; j <= n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}