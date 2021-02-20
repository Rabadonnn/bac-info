#include <iostream>

using namespace std;

int f(int n) {
  if (n == 1) {
    return 0;
  } else if (n == 2) {
    return 3;
  }

  return 2 * f(n - 1) - f(n - 2) + 2;
}

int main() {
  int x = 48;
  int y = 63;

  int i = 1;
  while (true) {
    if (f(i) == x) {
      i++;
      break;
    } else {
      i++;
    }
  }

  for (; i >= 1; i--) {
    cout << f(i) << " ";
  }
}
