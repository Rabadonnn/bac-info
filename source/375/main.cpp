#include <iostream>
#include <fstream>

using namespace std;

int main() {
  ifstream bac("source/375/bac.in");

  int n1 = -1;
  int n2 = -1;
  int n3 = -1;

  long x;

  int i = 0;
  while (bac >> x) {
    if (x < 0) {
      if (n1 == -1) {
        n1 = i;
      } else if (n2 == -1) {
        n2 = i;
      } else {
        n3 = i;
      }
    }
    i++;
  }

  int s1 = n2;
  int s2 = n3 - 1 - n1;
  int s3 = i - n2 - 1;

  int max = 0;
  if (s1 > max) {
    max = s1;
  }
  if (s2 > max) {
    max = s2;
  }
  if (s3 > max) {
    max = s3;
  }

  cout << max << endl;

  bac.close();
  return 0;
}
