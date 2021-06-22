#include <iostream>

using namespace std;

int main() {
  char s[20], t[20];

  strcpy(s, "ABCDUECDA");
  int i = 0;
  int j = strlen(s) - 1;

  while (i < j) {
    if (s[i] == s[j]) {
      strcpy(t, s + j + 1);
      strcpy(s + j, t);
      strcpy(t, s + i + 1);
      strcpy(s + i, t);
      j = j - 2;
    } else {
      i = i + 1;
      j = j - 1;
    }
  }

  cout << s << endl;
}