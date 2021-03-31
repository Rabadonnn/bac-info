#include <iostream>

using namespace std;

int main() {
  int a[4][5];

  for (int i = 3; i >= 0; i--) {
    for (int j = 0; j < 5; j++) {
      a[i][j] = (j + 1) + (3 - i) * 5;
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 5; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
