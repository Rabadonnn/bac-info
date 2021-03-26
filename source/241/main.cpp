#include <fstream>
#include <iostream>

using namespace std;

int main() {
  ifstream bacin("source/51/bac.in");

  int frec[100] = {0};
  int x;
  while (bacin >> x) {
    if (x > 9 && x < 100) {
      frec[x]++;
    }
  }

  int found = 0;
  for (int i = 99; i >= 10; i--) {
    if (frec[i] == 0 && i % 11 != 0) {
      found = 1;
      cout << i << endl;
      break;
    }
  }

  if (!found) {
    cout << "nu exista" << endl;
  }

  bacin.close();
}
