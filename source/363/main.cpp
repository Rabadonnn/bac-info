#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/363/bac.in");

  int frec[100] = {0};
  long x;

  while (bac >> x) {
    if (x >= 10 && x <= 99) {
      frec[x]++;
    }
  }

  int a = 0;
  int b = 0;

  for (int i = 98; i >= 10; i--) {
    if (i % 10 != (i / 10) % 10) {
      if (frec[i] == 0) {
        if (a == 0) {
          a = i;
        } else if (b == 0) {
          b = i;
          break;
        }
      }
    }
  }

  cout << a << " " << b << endl;

  bac.close();
  return 0;
}
