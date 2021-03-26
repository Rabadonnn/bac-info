#include <iostream>

using namespace std;

void paritate(long n, unsigned &nr) {
  nr = 1;
  for (int i = 1; i <= n / 2; i++) {
    if (n % i == 0 && n % 2 == i % 2) {
      nr++;
    }
  }
}

int main()
{
  long n = 20;
  unsigned nr;
  paritate(n, nr);
  cout << nr << endl;
}