#include <iostream>

using namespace std;

int main()
{
  char s[20] = "ELITIST";

  for (int i = 2; i < 6; i++) {
    if (i % 2 == 0) {
      s[i] = s[0];
    } else {
      s[i] = s[1] + i / 2;
    }
  }

  cout << s << endl;
}