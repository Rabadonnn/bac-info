#include <iostream>

using namespace std;

int main() {
  int x = 11;
  int y = 21;
  int k = 4;

  for (int i = 1; i <= y - x + 1; i++) {
    cout << i + x - 1 << " ";
    if (i % k == 0) {
      cout << "* ";
    }
  }
  cout << "* ";
}
