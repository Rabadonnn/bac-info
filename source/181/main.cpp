#include <iostream>

using namespace std;

void prodprim(int n, int &p) {
  p = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      bool prime = true;
      for (int j = 2; j <= i / 2; j++) {
        if (i % j == 0) {
          prime = false;
          break;
        }
      }
      if (prime) {
        p *= i;
      }
    }
  }
}

int main() {

  int n = 2000;
  int p;
  prodprim(n, p);
  cout << p << endl;
}
