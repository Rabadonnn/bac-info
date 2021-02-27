#include <iostream>

using namespace std;

int main()
{
  int n = 4;
  int k = 3;

  int a[n][n * k];

  for (int i = 0; i < n; i++) {
    int m = 0;
    for (int j = 0; j < n; j++) {
      for (int l = 0; l < k; l++) {
        a[i][m++] = j + 1 + i;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n * k; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
