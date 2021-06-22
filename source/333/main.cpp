#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int a[n];

  int c = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n / 2; i++) {
    int x = a[i];
    int y = a[n - i - 1];

    int prime = 1;

    int min = x;
    if (y < min) {
      min = y;
    }

    for (int j = 2; j <= min; j++) {
      if (x % j == 0 && y % j == 0) {
        prime = 0;
        break;
      }
    }
    if (prime) {
      c++;
    }
  }

  cout << c << " ";
}