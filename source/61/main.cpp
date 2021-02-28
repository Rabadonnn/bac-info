#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int n = 28731;
  int a[6][6];

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (i == j) {
        a[i][j] = 0;
      } else if (i < j) {
        a[i][j] = (n % (int)pow(10, i + 1)) / pow(10, i);
      } else {
        a[i][j] = (n % (int)pow(10, j + 1)) / pow(10, j);
      }
    }
  }

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
