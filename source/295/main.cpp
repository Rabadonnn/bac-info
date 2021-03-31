#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/295/bac.txt");

  int x;
  int ok = 1;
  int s = 0;
  int smax = 0;

  while (bac >> x) {
    if (s + x >= x && ok && s + x >= smax) {
      s += x;
    } else {
      ok = 0;
      if (s > smax) {
        smax = s;
      }
    }
    if (ok == 0) {
      ok = 1;
      s = x;
    }
  }

  if (s > smax) {
    smax = s;
  }

  cout << smax << endl;

  bac.close();
}
