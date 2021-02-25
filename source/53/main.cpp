#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[100];
  char result[101];

  cin.getline(text, 100);

  char *cuvant = strtok(text, " ");

  int found = 0;
  while (cuvant) {
    int lc = strlen(cuvant);
    if (lc % 2 == 1) {
      char newcuv[lc];
      for (int i = lc - 1; i >= 0; i--) {
        newcuv[i] = cuvant[lc - i - 1];
      }
      strcat(result, newcuv);
      if (strcmp(cuvant, newcuv) != 0) {
        found = 1;
      }
    } else {
      strcat(result, cuvant);
    }
    strcat(result, " ");
    cuvant = strtok(NULL, " ");
  }

  if (!found) {
    cout << "nu exista" << endl;
  } else {
    cout << result << endl;
  }
}
