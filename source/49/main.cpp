#include <iostream>

using namespace std;

int main()
{
  int n = 4;
  int x = 15;

  int i = x;
  int found = 0;

  while (found < n) {
    if (i % x == 0) {
      found++;
    }
    i++;
  }

  while (found > 0) {
    if (i % x == 0) {
      found--;
      cout << i << " ";
    }
    i--;
  }
}
