#include <iostream>

using namespace std;

void Impare(unsigned &n) {
  int cifre = 0;
  int x = n;
  while (x) {
    int c = x % 10;
    x /= 10;
    if (c % 2 == 1) {
      n -= pow(10, cifre);
    }
    cifre++;
  }
}

int main() {
  cout << "- rx_6 -\n" << endl;

  unsigned int n = 235690;
  Impare(n);
  cout << n << endl;

  cout << "\n---" << endl;
}
