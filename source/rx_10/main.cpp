#include <iostream>

using namespace std;

void perfect(unsigned int a, unsigned int b) {
  int gasit = 0;
  for (int i = a; i <= b; i++) {
    int s = 0;
    for (int j = 1; j <= i / 2; j++) {
      if (i % j == 0) {
        s += j;
      }
    }
    if (s == i) {
      cout << i << " ";
      gasit = 1;
    }
  }
  if (!gasit) {
    cout << "nu exista" << endl;
  }
}

int main()
{
  perfect(5, 30);
}
