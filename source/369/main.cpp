#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac1("source/369/bac1.txt");
  ifstream bac2("source/369/bac2.txt");

  int n1;
  bac1 >> n1;
  int n2;
  bac2 >> n2;

  int x;
  int y;

  while (bac1 >> x) {
    while (y < x && bac2 >> y) {
      if (x != y && y % 5 == 0) {
        cout << y << " ";
      }
      if (y > x) {
        break;
      }
    }
    if (x != y && x % 5 == 0) {
      cout << x << " ";
    }
  }

  bac1.close();
  bac2.close();
}
