#include <iostream>

using namespace std;

void afisare(int x, int y, int k) {
  int c = 0;
  for (int i = x; i <= y; i++) {
    cout << i << " ";
    if (++c % 4 == 0) {
      cout << "* ";
    }
  }
  cout << "*";
}

int main() {
  afisare(11, 21, 4);
}