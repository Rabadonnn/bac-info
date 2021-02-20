#include <iostream>

using namespace std;

int main() {
  char a[9][9];
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      a[i][j] = '*';
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (i < j && j < 8 - i) {
        a[i][j] = 'b';
      } else {
        a[i][j] = 'a';
      }
    }
  }

  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
