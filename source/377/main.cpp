#include <iostream>

using namespace std;

int main() {
  int x = 1357;
  int c = 0;
  int y = x;
  while (y) {
    y /= 10;
    c++;
  }

  int a[c][c];

  for (int i = 0; i < c; i++) {
    y = x;
    for (int j = c - 1; j >= 0; j--) {
      a[i][j] = y % 10;
      y /= 10;
    }
  }

  for (int i = 0; i < c; i++) {
    for (int j = 0; j < c; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
