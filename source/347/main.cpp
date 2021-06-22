#include <iostream>

using namespace std;

int main() {
  int m;
  int n;

  cin >> m >> n;

  if (m > n) {
    int t = m;
    m = n;
    n = t;
  }

  if (m % 2 == 0) {
    m++;
  }

  int r = 0;
  while (m <= n) {
    m += 2;
    r++;
  }

  cout << r << endl;

  return 0;
}
