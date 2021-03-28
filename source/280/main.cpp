#include <iostream>

using namespace std;

int main() {
  int n = 12;

  // test antrenament 1 2020 sub3 ex1

  // solutia 1

  for (int i = n; i >= 0; i--) {
    for (int j = 1; j <= n; j++) {
      if (j >= i) {
        break;
      }
      if (i * j == n) {
        cout << "(" << i << " " << j << ")"
             << " ";
      }
    }
  }
  cout << endl;
}
