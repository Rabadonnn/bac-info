#include <iostream>

using namespace std;

int main()
{
  int x = 10;
  int y = 50;
  int s = 0;

  int first = 1;
  for (int i = x; i <= y; i++) {
    int sq = sqrt(i);
    if (sq * sq == i) {
      s += i;
      if (first) {
        cout << i;
        first = 0;
      } else {
        cout << "+" << i;
      }
    }
  }
  cout << "=" << s;
}
