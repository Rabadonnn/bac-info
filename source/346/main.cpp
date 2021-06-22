#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/346/bac.txt");

  int x;
  int y;
  int pos = 1;

  bac >> x;

  while (bac >> y) {
    if (y < x) {
      pos++;
    }
  }

  cout << pos << endl;

  bac.close();
  return 0;
}
