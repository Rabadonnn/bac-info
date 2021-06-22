#include <iostream>

using namespace std;

int f(int x) {
  if (x <= 4) {
    return x;
  }

  return x - f(x - 2);
}

int main() {
  cout << f(21) << endl;
}
