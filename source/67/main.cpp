#include <iostream>
#include <cstring>

using namespace std;

int main()
{
  char s1[50];
  char s2[50];

  strcpy(s1, "bac2021");
  cout << strlen(s1) << endl;
  strcpy(s2, s1 + 3);
  cout << s2 << endl;
  strcat(s2, s1 + 3);
  cout << s2 << endl;
}
