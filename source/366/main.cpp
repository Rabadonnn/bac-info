#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/366/bac.in");

  int zp[10] = {0};
  int up[10];

  int x;

  while (bac >> x) {
    int c = (x % 100) / 10;
    zp[c]++;
    up[c] = x;
  }

  int mx = 0;

  for (int i = 0; i <= 9; i++) {
    if (zp[i] > mx) {
      mx = zp[i];
    }
  }

  for (int i = 0; i <= 9; i++) {
    if (zp[i] == mx) {
      cout << up[i] << " ";
    }
  }

  bac.close();
}
