#include <iostream>

using namespace std;

void nr(long n, long c, long &m) {
  m = -1;
  int p = 1;
  while (n != 0) {
    int d = n % 10;
    if (d != c) {
      if (m == -1) {
        m = 0;
      }
      m = p * d + m;
      p *= 10;
    }
    n /= 10;
  }
}

int main() {
  long m;
  nr(50752, 5, m);
  cout << m << endl;
}