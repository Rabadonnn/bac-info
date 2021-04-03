#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/315/bac.txt");
  long k;
  bac >> k;
  int max = 0;
  int cur = 0;
  int sec = 0;
  long x;

  while (bac >> x) {
    if (x % k == 0) {
      cur++;
      if (cur == 1) {
        sec++;
      }
      if (cur > max) {
        max = cur;
      }
    } else {
      cur = 0;
    }
  }

  cout << max << " " << sec;

  bac.close();
}