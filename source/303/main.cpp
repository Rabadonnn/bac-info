#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[101];
  cin.get(text, 101);
  char vocale[] = "aeiou";
  int okay = 0;

  char *cuvant = strtok(text, " ");
  while (cuvant) {
    int v = 0;
    int c = 0;

    for (int i = 0; i < strlen(cuvant); i++) {
      if (strchr(vocale, cuvant[i]) != NULL) {
        v++;
      } else {
        c++;
      }
    }

    if (c > v) {
      cout << cuvant << " ";
      okay = 1;
    }

    cuvant = strtok(NULL, " ");
  }

  if (!okay) {
    cout << "nu exista" << endl;
  }
}
