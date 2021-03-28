#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bacin("source/282/bac.in");

  // test antrenament 1 2020 sub3 ex3

  int max1 = 0;
  int max2 = 0;

  int x;
  while (bacin >> x) {
    if (x % 10 == 0 && (x % 100) / 10 == 2) {
      if (x > max1) {
        max2 = max1;
        max1 = x;
      } else if (x > max2) {
        max2 = x;
      }
    }
  }

  cout << max2 << " " << max1 << endl;

  bacin.close();
}