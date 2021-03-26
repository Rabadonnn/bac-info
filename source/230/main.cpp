#include <iostream>
#include <fstream>

using namespace std;

int main()
{
  ifstream bacin("source/41/bac.in");
  int x;
  bacin >> x;
  int lastx = x;
  cout << x << " ";

  while (bacin >> x) {
    if (x != lastx) {
      cout << x << " ";
      lastx = x;
    }
  }

  bacin.close();
}
