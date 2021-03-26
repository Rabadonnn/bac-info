#include <iostream>

using namespace std;

int n = 10;
int x = 1;
int y = 2;
int z = 4;

int f(int k) {
  if (k == 1) {
    return x;
  } else if (k == 2) {
    return y;
  } else if (k == 3) {
    return z;
  }

  return f(k - 1) + f(k - 2) - f(k - 3);
}

int main() {

  for (int i = n; i >= 1; i--) {
    cout << f(i) << " ";
  }
}
