#include <iostream>

using namespace std;

int interval(unsigned int n) {
  int i = n + 1;
  while (true) {
    int prim = 1;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prim = 0;
        break;
      }
    }
    if (i == 0 || i == 1) {
      prim = 0;
    }
    if (prim) {
      return ++i;
    }
    i++;
  }
}

int main() { cout << interval(8) << endl; }
