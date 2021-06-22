#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int p;
  cin >> p;

  int r = 0;

  while (n % p == 0) {
    r++;
    n /= p;
  }

  cout << (r == 0 ? -1 : r) << endl;
}
