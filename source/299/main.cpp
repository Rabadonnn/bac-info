#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/299/bac.txt");

  int x;
  int y;
  int n;

  bac >> n;
  bac >> x;

  while (bac >> y) {
    if (x > y) {
      cout << x << " ";
    } else {
      cout << y << " ";
    }

    // cout << max(x, y) << " ";

    x = y;
  }

  bac.close();
  return 0;
}
