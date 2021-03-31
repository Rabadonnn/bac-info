#include <iostream>

using namespace std;

int main() {
  unsigned n, k;
  cin >> n >> k;
  unsigned a[n + 1];

  for (int i = 1; i <= n; i++) {
    a[i] = (i * k) % 10;
  }

  for (int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }

  return 0;
}
