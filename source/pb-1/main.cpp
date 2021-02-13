#include <iostream>

using namespace std;

// Subprogramul prodprimare doiparametri:•n, prin care primește un număr natural
// (n apartine [2,109]); p, prin care furnizează produsuldivizorilor primiailui
// n.Scrieți definiția completă a subprogramului.Exemplu: dacă n=2000, în urma
// apelului p=10, deoarece 2000 = 2^4 * 53.

bool nrPrim(int n) {

  if (n == 0 || n == 1) {
    return false;
  }

  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }

  return true;
}

void prodprim(int n, int &p) {
  p = 1;
  for (int i = 1; i <= n; i++) {
    if (n % i == 0 && nrPrim(i)) {
      p *= i;
    }
  }
}

int main() {
  cout << "----- pb-1 -----\n" << endl;

  int p;
  prodprim(2000, p);

  cout << p << endl;

  cout << "\n----- END -----" << endl;
}
