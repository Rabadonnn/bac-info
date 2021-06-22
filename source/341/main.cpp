#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream numere("source/341/numere.txt");

  int x;
  int cifre[10] = {0};

  while (numere >> x) {
    while (x != 0) {
      cifre[x % 10]++;
      x /= 10;
    }
  }

  long long nr = 0;
  for (int i = 9; i >= 0; i--) {
    for (int j = 0; j < cifre[i]; j++) {
      nr = nr * 10 + i;
    }
  }
  cout << nr << endl;

  numere.close();
}