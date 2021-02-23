#include <iostream>

using namespace std;

int main()
{
  int ok = 1;
  char a;
  for (int i = 1; i <= 11; i++) {
    cin >> a;
    if (a != 'a' && a != 'e' && a != 'i' && a != 'o' && a != 'u') {
      ok = 0;
    }
  }
  cout << ok;
}
