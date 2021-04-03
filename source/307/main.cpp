#include <iostream>

using namespace std;

int putere(long n, long p) {
  for (int i = 2; i <= p / 2; i++) {
    if (p % i == 0) {
      return -1;
    }
  }

  int putere = 0;
  while (n % p == 0) {
    putere++;
    n /= p;
  }
  return putere;
}

int main() { cout << putere(80, 2) << endl; }
