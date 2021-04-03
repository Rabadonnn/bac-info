#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/309/bac.txt");

  int x, sm = 0, s = 0;

  while (bac >> x) {
    if (s + x < x) {
      s += x;
    } else {
      s = x;
    }
    if (s < sm) {
      sm = s;
    }
  }

  cout << sm << endl;

  bac.close();
}
