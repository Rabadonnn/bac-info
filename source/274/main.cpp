#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  fstream bacin("source/84/bac.in");

  int frec[11] = {0};
  int x;
  while (bacin >> x) {
    frec[x]++;
  }

  int suma = 0;
  for (int i = 0; i < 11; i++) {
    if (frec[i] != 0) {
      suma += 10 + frec[i] * (i * i);
    }
  }

  cout << suma << endl;

  bacin.close();
}