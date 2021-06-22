#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n][n];

  for (int i = 0; i < n; i++) {
    int x = n - i - 1;
    int s = -1;
    for (int j = 0; j < n; j++) {
      a[i][j] = x;
      if (x == 0) {
        s *= -1;
      }
      x += s;
      cout << a[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
