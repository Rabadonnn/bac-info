#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  // test antrenament stiinte 3 2020 sub3 ex3
  fstream bacin("source/285/bac.in");
  int pn = 0;
  int ln = 0;
  int c = 1;
  int x;
  while (bacin >> x) {
    if (x < 0) {
      if (pn == 0) {
        pn = c;
      } else {
        ln = c;
      }
    }
    c++;
  }

  cout << ln - pn + 1 << endl;

  bacin.close();
}