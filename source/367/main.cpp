#include <iostream>

using namespace std;

int joc(int n) {
  int r = 0;
  for (int i = 2; i <= n; i++) {
    r += n % i == 0;
  }
  return r;
}

int main() {
  cout << joc(12) << endl;
}
