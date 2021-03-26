#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream bacin("source/48/bac.in");

  int x;
  int frec[100];
  while (bacin >> x) {
    if (x < 100 && x > 9) {
      frec[x]++;
    }
  }

  int found = 0;
  for (int i = 99; i >= 10; i--) {
    if (frec[i] == 0 && i % 11 != 0) {
      found++;
      cout << i << " ";
      if (found == 2) {
        break;
      }
    }
  }

  if (found == 0) {
    cout << "nu exista" << endl;
  }

  bacin.close();
}
