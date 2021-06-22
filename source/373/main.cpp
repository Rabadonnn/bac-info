#include <iostream>

using namespace std;

void numar(long n, int c, long &m) {
  if (n == 0) {
    m = 0;
    return;
  }
  m = -1;
  int p = 1;

  while (n != 0) {
    int r = n % 10;
    n /= 10;
    if (r != c) {
      if (m == -1) {
        m = 0;
      }
      m = r * p + m;
      p *= 10;
    }
  }
}

int main() {
  long m;
  numar(555, 5, m);
  cout << m << endl;
}
