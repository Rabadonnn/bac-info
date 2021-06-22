#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/372/bac.txt");

  int n;
  bac >> n;

  int x;
  int max = 0;
  while (bac >> x) {
    if (x > max) {
      max = x;
    }
    cout << max << " ";
  }

  bac.close();
  return 0;
}
