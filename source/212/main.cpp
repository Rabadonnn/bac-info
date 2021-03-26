#include <iostream>

using namespace std;

int main()
{
  int w = 5;
  int h = 4;
  int a[h][w];

  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      a[i][j] = (w - j) * h - i;
      cout << a[i][j] << " ";
    }
    cout << endl;
  }
}
