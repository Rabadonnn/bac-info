#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/332/bac.txt");

  int frec[10] = {0};
  int x;
  while (bac >> x) {
    frec[x]++;
  }

  for (int i = 0; i <= 8; i += 2) {
    for (int j = 0; j < frec[i]; j++) {
      cout << i << " ";
    }
  }

  bac.close();
  return 0;
}