#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/384/numere.txt");

  int c;
  int f[10] = {0};

  while (bac >> c) {
    while (c != 0) {
      f[c % 10]++;
      c /= 10;
    }
  }

  long long nr = 0;

  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < f[i]; j++) {
      nr = nr * 10 + i;
    }
  }

  cout << nr << endl;

  bac.close();

  return 0;
}
