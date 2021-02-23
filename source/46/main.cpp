#include <fstream>
#include <iostream>

using namespace std;

int main()
{
  ifstream bacin("source/46/bac.txt");
  int n;
  bacin >> n;
  int a[n];
  int nrTermeni = 0;
  for (int i = 0; i < n; i++) {
    bacin >> a[i];
  }
  int x;
  while (bacin >> x) {
    for (int i = 0; i < n; i++) {
      if (a[i] > x) {
        nrTermeni++;
        break;
      } else if (a[i] == x) {
        break;
      }
    }
  }

  cout << nrTermeni << endl;

  bacin.close();
}
