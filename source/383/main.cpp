#include <iostream>
#include <cstring>

using namespace std;

int main() {
  char text[100];
  cin.getline(text, 100);

  char *cuvant = strtok(text, " ");
  int f = 0;

  while (cuvant) {
    char v = 'b';

    for (int i = 0; i < strlen(cuvant); i++) {
      if (strchr("aeiou", cuvant[i]) != NULL) {
        if (v == 'b') {
          v = cuvant[i];
        } else if (cuvant[i] != v) {
          v = 'b';
          f = 1;
          break;
        }
      }
    }

    if (v != 'b') {
      cout << cuvant << endl;
    }

    cuvant = strtok(NULL, " ");
  }

  if (!f) {
    cout << "nu exista" << endl;
  }
  return 0;
}
