#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bacin("source/279/bac.in");

  int x;
  int lastx;
  bacin >> lastx;
  while (bacin >> x) {
    if (x != lastx && lastx % 2 == 0) {
      cout << lastx << " ";
    }
    lastx = x;
  }

  bacin.close();
}