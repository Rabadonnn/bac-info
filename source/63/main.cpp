#include <iostream>

using namespace std;

int main() {
  int n = 4;
  int a[n][n];

  int c = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      c += 2;
      if (c % 3 == 0) {
        c += 2;
      }
      a[i][j] = c;
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
