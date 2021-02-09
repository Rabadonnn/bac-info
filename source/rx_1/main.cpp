#include <iostream>

using namespace std;

unsigned CifrePrime(unsigned n) {
  int s = 0;

  while (n) {
    int c = n % 10;
    n /= 10;
    bool prim = true;
    for (int i = 2; i <= c / 2; i++) {
      if (c % i == 0) {
        prim = false;
        break;
      }
    }
    if (c == 0 || c == 1) {
      prim = false;
    }
    if (prim) {
      s += c;
    }
  }

  return s;
}

int main() {
  cout << "--- rx_1 ---\n" << endl;

  cout << CifrePrime(1235405) << endl;

  cout << "\n--- END ---" << endl;
}
