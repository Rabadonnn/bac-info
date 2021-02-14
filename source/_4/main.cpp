#include <cstring>
#include <iostream>

using namespace std;

int main() {

  char text[] = "Fat Frumos este cel mai viteaz";
  int n = 6;
  int gasit = 0;

  char *cuvant = strtok(text, " ");
  while (cuvant) {
    if (strlen(cuvant) == n) {
      cout << cuvant << endl;
      gasit = 1;
    }
    cuvant = strtok(NULL, " ");
  }

  if (gasit == 0) {
    cout << "nu exista" << endl;
  }
}
