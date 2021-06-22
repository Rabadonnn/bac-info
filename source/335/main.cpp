#include <iostream>

using namespace std;

int main() {
  char s[] = "voalata";
  char aux[15];

  int i = 0;
  while (i < strlen(s)) {
    if (strchr("aeiou", s[i]) != NULL) {
      strcpy(aux, s + i + 1);
      strcpy(s + i, aux);
      i++;
    } else {
      i += 2;
    }
  }

  cout << s << endl;
}