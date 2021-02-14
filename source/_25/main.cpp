#include <iostream>

using namespace std;

int main()
{
  char a[7][7];

  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 7; j++) {
      if ((i < j && i < 6 - j) || (i > j && i > 6 - j)) {
        a[i][j] = 'a';
      } else {
        a[i][j] = 'b';
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
