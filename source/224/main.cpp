#include <iostream>

using namespace std;

int main()
{
  int a[5][7];

  for (int i = 0; i < 5; i++) {
    for (int j = 6; j >= 0; j--) {
      if (i == 0 || j == 6) {
        a[i][j] = 1;
      } else {
        a[i][j] = (a[i - 1][j] + a[i][j + 1]) % 10;
      }
    }
  }

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 7; j++) {
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
