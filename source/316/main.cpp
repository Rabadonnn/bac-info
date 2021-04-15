#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/316/bac.txt");

  int crt;
  int ant;
  int lg = 1;
  int max = 1;
  int r = 0;
  int rm = 0;

  bac >> ant;
  while (bac >> crt) {
    if (crt - ant == r) {
      lg++;
      if (lg > max) {
        max = lg;
        rm = r;
      } else if (lg == max && r > rm) {
        rm = r;
      }
    } else {
      lg = 1;
      r = crt - ant;
    }
    ant = crt;
  }

  if (max > 2) {
    cout << rm << endl;
  } else {
    cout << "nu exista" << endl;
  }

  bac.close();
}