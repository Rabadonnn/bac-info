#include <cstring>
#include <iostream>

using namespace std;

int main() {
  char text[] = "ABIA aSTept sa Merg lA scoala";

  for (int i = 0; i < strlen(text); i++) {
    if (text[i] == ' ') {
      i++;
      text[i] = toupper(text[i]);
    } else {
      text[i] = tolower(text[i]);
    }
  }
  text[0] = toupper(text[0]);

  cout << text << endl;
}
