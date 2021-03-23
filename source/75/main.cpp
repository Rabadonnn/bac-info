#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char s[20];
  char t[20];

  strcpy(s, "sanataTEA");

  cout << strlen(s);

  int i = 0;
  while (i < strlen(s)) {
    if (s[i] == 'a') {
      strcpy(t, s + i + 1);
      strcpy(s + i, t);
    } else {
      i++;
    }
  }
  cout << s;
}
