#include <iostream>

using namespace std;

int main() {
  int n;
  int k;
  cin >> n >> k;
  int t = 1;

  for (int i = 1; i <= n / k; i++) {
    for (int j = 1; j <= k; j++) {
      cout << 2 * t << ' ';
    }
    t++;
  }

  for (int i = n % k; i >= 1; i--) {
    cout << 3 * t << ' ';
  }
}
