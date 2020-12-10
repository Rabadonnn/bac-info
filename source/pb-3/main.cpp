#include <iostream>

using namespace std;

// Se citesc de la tastatură două numere naturale din intervalul [1,81], p1și
// p2, și se cere scrierea în fișierul bac.outa tuturor numerelor naturale cu
// exact 7cifre, pentru care produsul primelor două cifre este egal cu p1, cele
// trei cifre din mijloc suntegale între ele, iar produsul ultimelor două cifre
// este egal cu p2. Numerele  apar  în  fișier în ordine strict descrescătoare,
// fiecare  pe  câte  o  linie.Proiectați  un algoritm eficient din punctul de
// vedere al memoriei utilizate și al timpului de executare.Exemplu:dacă p1=12,
// iar p2=8, atunci 2633324și 3400018suntdouădintre cele 160de numere
// cuproprietatea cerută (2∙6=3∙4=12și 2∙4=1∙8=8

int main() {
  cout << "----- pb-3 -----\n" << endl;

  int p1 = 12;
  int p2 = 8;

  int found = 0;
  for (int i = 9999999; i >= 1000000; i--) {
    int n = i;
    int nrs[7];
    int j = 0;
    while (n != 0) {
      int c = n % 10;
      n /= 10;
      nrs[j++] = c;
    }
    int a = nrs[5] * nrs[6];
    int b = nrs[0] * nrs[1];
    if (a == p1 && b == p2 && nrs[2] == nrs[3] && nrs[2] == nrs[4]) {
      cout << i << " ";
      found++;
    }
  }

  cout << endl << "Found: " << found << endl;

  cout << "\n----- END -----" << endl;
}
