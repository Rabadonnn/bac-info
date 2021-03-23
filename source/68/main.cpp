#include <iostream>

using namespace std;

void f(int x) {
  cout << "*";
  if (x > 0) {
    cout << x;
    f(x / 100);
  }
  cout << "/";
}

int main() {
  // int x = -22;
  // int a = x >= -21 && x <= -2 && x >= 2 && x <= 21;
  // int b = !(x < -21 || x > -2) || !(x < 2 || x > 21);
  // int c = x >= -21 || x <= -2 || x >= 2 || x <= 21;
  // int d = !(x < -21 && x > 21 && x > -2 || x < 2);

  // cout << a << " " << b << " " << c << " " << d << endl;

  f(54321);
}
