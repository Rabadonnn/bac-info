#include <iostream>

using namespace std;

int main() {
  int x, y; 
  cin >> x >> y;
  int k = 0;
  int i = x;

  while (i <= y) {
    int n = i;
    int c = 0;

    while (n > 0 && c == 0) {
      if (n % 2 == 1) {
        c = 1;
      }
      n /= 10;
    }
    k += c;
    i++;
  }

  cout << k << endl;
}