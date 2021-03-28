#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bacin("source/290/bac.in");
  int x;
  int y;
  int c = 1;
  bacin >> x;

  while (bacin >> y) {
    if (y == x) {
      c++;
    } else {
      if (c == 2) {
        cout << x << " ";
      }
      c = 1;
    }
    x = y;
  }
  if (c == 2) {
    cout << x;
  }

  bacin.close();
}
