#include <iostream>

using namespace std;

int transformareBaza10(unsigned b, unsigned n) {
  int s = 0;
  int i = 0;
  while (n) {
    int c = n % 10;
    n /= 10;

    int p = c * (pow(b, i));
    s += p;
    i++;
  }
  return s;
}

int main() { cout << transformareBaza10(2, 10010) << endl; }
