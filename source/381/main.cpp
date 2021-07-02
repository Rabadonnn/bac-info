#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/381/bac.txt");

  int i1 = 0;
  int i2 = 0;

  long x;

  while (bac >> x) {
    if (x % 2 == 1) {
      if (i1 == 0) {
        i1 = x;
      } else if (i2 == 0) {
        i2 = x;
      } else {
        i1 = i2;
        i2 = x;
      }
    }
  }

  if (i1 == 0 || i2 == 0) {
    cout << "nu exista" << endl;
  } else {
    cout << i1 << " " << i2 << endl;
  }

  bac.close();
  return 0;
}
