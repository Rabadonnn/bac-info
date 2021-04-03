#include <iostream>
#include <fstream>

using namespace std;

int main() {
  fstream bac("source/312/bac.in");
  int nr[10] = {0};
  int p[10] = {0};

  int i = 0;
  int max = 0;
  int x;

  while (bac >> x) {
    nr[x % 10]++;
    p[x % 10] = ++i;
    if (nr[x % 10] > max) {
      max = nr[x % 10];
    }
  }

  for (int i = 0; i < 10; i++) {
    if (nr[i] == max) {
      cout << p[i] << " ";
    }
  }

  bac.close();
}