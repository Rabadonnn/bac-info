#include <iostream>

using namespace std;

long divizor(long a, long b, int k) {
  long nr = 0;

  for (; a <= b; a++) {
    if (a % k == 0 && a % 10 == k) {
      nr++;
    }
  }

  return nr;
}

int main() {
  cout << divizor(3, 50, 4);
}