#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/319/bac.txt");
  int x = -1;
  int c = 1;
  int y;

  while (bac >> y) {
    if (x != y && x != -1) {
      cout << x << " " << c << " ";
      c = 0;
    }
    x = y;
    c++;
  }
  
  cout << y << " " << c;

  bac.close();
}