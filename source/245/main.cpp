#include <iostream>

using namespace std;

int main() {
  char a[7][7];
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      a[i][j] = '*';
    }
  }

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if (j >= i) {
        a[i][j] = 97 + j - i;
      }
    }
  }

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
