#include <iostream>

using namespace std;

int main()
{
  int m = 2;
  int n = 3;
  int a[m][n];

  int x = 0;
  for (int i = m - 1; i >= 0; i--) {
    for (int j = n - 1; j >= 0; j--) {
      int p = x * x;
      while (x * x % 2 == 0) {
        x++;
      }
      x++;
      a[i][j] = p;
    }
  }

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
