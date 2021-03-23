#include <iostream>

using namespace std;

unsigned int joc(unsigned int n) {
  int result = 1;
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      result++;
    }
  }

  return result;
}

int main()
{
  cout << joc(12) << endl;
}

