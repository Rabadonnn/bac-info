#include <iostream>

using namespace std;

int main() {
  char s[] = "PRASLEA*CEL*VOINIC";
  char t[20];

  int i = 0;
  while (i < strlen(s)) {
    if (strchr("ACEI", s[i]) != NULL) {
      strcpy(t, s + 1 + i);
      strcpy(s + i, t);
    } else {
      i++;
    }
  }

  cout << s << endl;
}