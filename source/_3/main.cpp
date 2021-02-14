#include <iostream>

using namespace std;

int Egal(unsigned n) {
  int imp = -1;
  while (n) {
    int c = n % 10;
    n /= 10;
    if (c % 2 == 1) {
      if (imp == -1) {
        imp = c;
      } else if (c != imp) {
        return 0;
      }
    }
  }
  return 1;
}

int main() {

  int n = 7727470;
  cout << Egal(n) << endl;
}
