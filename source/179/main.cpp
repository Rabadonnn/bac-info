#include <cstring>
#include <iostream>
using namespace std;

// Într-un text cu cel mult 100 de caractere, cuvintele sunt formate din litere
// mici ale alfabetului englez și sunt separate prin câte un spațiu.Scrieți un
// program C/C++ care citește de latastatură un text de tipul menționat și
// afișează pe ecran,  pe  linii  separate,toate  cuvintele  sale pentru care
// numărul de vocale este strict mai mic decâtnumărul de consoane.Dacă nu există
// niciun astfel de cuvânt, se afișează pe ecran mesajul nuexista. Se consideră
// vocale literele din mulțimea a, e, i, o, u.Exemplu: pentru textul "ei au
// plantat tamarix ea a a dus iasomie" se afișează pe ecran, nu neapărat în
// această ordine, cuvintele alăturate.

int main() {
  cout << "----- pb-2 -----\n" << endl;

  char text[] = "ei au plantat tamarix ea a adus iasomie";
  char vowels[] = "aeiouAEIOU";

  char *token = strtok(text, " ");

  bool nuexista = false;

  while (token) {
    int vocale = 0;
    int consoane = 0;

    for (int i = 0; i < strlen(token); i++) {
      if (strchr(vowels, token[i])) {
        vocale++;
      } else {
        consoane++;
      }
    }

    if (vocale < consoane) {
      cout << token << endl;
    }

    token = strtok(NULL, " ");
  }

  if (nuexista) {
    cout << "nu exista" << endl;
  }

  cout << "\n----- END -----" << endl;
}
