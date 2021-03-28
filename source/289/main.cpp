#include <iostream>

using namespace std;

void generatoare(unsigned n) {
  int found = 0;

  for (int i = 2; i <= n / 2 + 1; i += 2) {
    for (int j = 1; j <= n / 2 + 1; j++) {
      if (i != j && i * j + (i / j) == n) {
        cout << i << "-" << j << " ";
        found = 1;
      }
    }
  }

  if (!found) {
    cout << "nu exista" << endl;
  }
}

int main()
{
  generatoare(2020);
}
