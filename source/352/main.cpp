#include <iostream>

using namespace std;

int main() {
  int x;
  int y;
  cin >> x >> y;
  int inc = y - x;

  while (inc >= 0) {
    cout << y << " ";
    y = y - inc;
    inc = inc - 2;
  }

  cout << endl;
  return 0;
}
