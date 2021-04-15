#include <fstream>
#include <iostream>

using namespace std;

int main() {
  fstream bac("source/328/bac.in");

  int i = 0;
  int l = 0;
  int ml = 0;
  int lni = 0;
  int hn = 0;
  int x;

  while (bac >> x) {
    if (x < 0) {
      if (hn == 0) {
        hn = 1;
      } else {
        if (l > ml) {
          ml = l;
        }
        l = i - lni - 1;
      }
      lni = i;
    }
    i++;
    l++;
  }

  cout << ml << endl;

  bac.close();
}