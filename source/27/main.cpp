#include <cstdlib>
#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[] = "partea intreaga a lui 5,75 este egala cu a lui 5,25 si cu a "
                "lui 5 si este 5";

  char result[100];

  char *cuvant = strtok(text, " ");
  while (cuvant) {
    int converted = atoi(cuvant);
    if (converted) {
      snprintf(result, 100, "%s %d", result, converted);
    } else {
      snprintf(result, 100, "%s %s", result, cuvant);
    }
    cuvant = strtok(NULL, " ");
  }

  cout << result << endl;
}
