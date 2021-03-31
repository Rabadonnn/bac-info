#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[100];
  cin.getline(text, 100);

  int result = 0;
  char *cuvant = strtok(text, " ");
  while (cuvant) {
    if (strchr("123456789", cuvant[0]) != NULL) {
      if (strchr(cuvant, ',') == NULL) {
        result++;
      }
    }

    cuvant = strtok(NULL, " ");
  }

  cout << result << endl;
}
