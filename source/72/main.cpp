#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  for (int i = 100; i < 1000; i++) {
    int s = 0;
    int x = i;
    while (x) {
      int c = x % 10;
      x /= 10;
      s += c;
    }
    if (s != 0 && s % 9 == 0) {
      cout << i << " ";
      count++;
    }
  }
  cout << endl << "Result: " << count << endl;
}
