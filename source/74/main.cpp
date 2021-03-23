#include <iostream>

using namespace std;

int main() {
  int n;
  int k;
  cin >> n >> k;
  int p = 1;

  while (n > 0) {
    int c = n % 10;
    if (k > 0) {
      if (c % 2 == 1) {
        p *= c;
      }
    }

    n /= 10;
    k--;
  }

  cout << p << endl;
}
