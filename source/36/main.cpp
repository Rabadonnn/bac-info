#include <iostream>

using namespace std;

void perechi(unsigned n) {
  int found = 0;

  for (int i = 1; i <= n; i += 2) {
    for (int j = 2; j <= n; j += 2) {
      if (i * j == n) {
        cout << "[" << i << " " << j << "]" << " ";
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
  perechi(12);
}
