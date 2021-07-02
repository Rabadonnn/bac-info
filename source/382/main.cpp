#include <iostream>

using namespace std;

void divizior(long a, long b, int k, long &nr) {
  nr = 0;
  for (; a <= b; a++) {
    if (a % k == 0 && a % 10 == k) {
      nr++;
    }
  }
}

int main() {
  long nr;
  divizior(3, 50, 4, nr);
  cout << nr << endl;
}
