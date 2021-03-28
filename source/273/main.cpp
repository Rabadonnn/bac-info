#include <iostream>

using namespace std;

int main() {
  int n = 6;
  int k = 5;
  int a[6][6] = {{0, 1, 4, 5, 3, 2}, {0, 6, 0, 7, 5, 0}, {4, 0, 0, 6, 0, 6},
                 {2, 0, 0, 5, 0, 0}, {3, 0, 6, 4, 0, 8}, {0, 6, 9, 0, 0, 0}};

  int t = a[k - 1][0];
  for (int i = 1; i < k - 1; i++) {
    int nt = a[k - 1][i];
    a[k - 1][i] = t;
    t = nt;
  }
  a[k - 1][0] = t;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}