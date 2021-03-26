#include <cstring>
#include <iostream>

using namespace std;

int main()
{
  char text[] = "Modul de -3,24 este 3,24 si modul de -15 este 15";
  char result[100];

  int j = 0;
  for (int i = 0; i < strlen(text); i++) {
    if (text[i] != '-') {
      result[j++] = text[i];
    }
  }

  cout << result << endl;
}
