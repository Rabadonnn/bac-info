#include <iostream>

using namespace std;

void produs(unsigned n, int &p) {
  int frec[10] = {0};
  while (n) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 0) {
      frec[c]++;
    }
  }
  p = 1;
  int found = 0;
  for (int i = 0; i < 9; i++) {
    if (frec[i] != 0) {
      found = 1;
      p *= i;
    }
  }
  if (!found) {
    p = -1;
  }
}

int main() {
  unsigned n = 122325;
  int p;
  produs(n, p);
  cout << p << endl;
}
