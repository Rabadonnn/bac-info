#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/306/bac.txt");

  int n;
  bac >> n;
  int x;
  int max = -1;

  while (bac >> x) {
    if (x > max) {
      max = x;
    }
    cout << max << " ";
  }

  bac.close();
}
