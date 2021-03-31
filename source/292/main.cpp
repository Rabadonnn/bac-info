#include <iostream>

using namespace std;

int main()
{
  char a[6][6];

  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      if (j + 1 > i) {
        a[i][j] = '(';
      } else {
        a[i][j] = '*';
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
