#include <iostream>

using namespace std;

int main()
{
    cout << "----- functii-string -----\n" << endl;

/*
 *      strlen(char *sir) -> (int) returneaza lungimea sirului
 *
 *      strcpy(char *sursa, char *destinatie) -> copiaza sirul sursa in sirul destinatie
 *
 *      strcat(char *sursa, char *destinatie) -> adauga sirul sursa la sirul destinatie
 *
 *      strncat(char *sursa, char *destinatie, int n) -> adauga primele n caractere din sursa la destinatie
 *
 *      strchr(char *sursa, char caracter) -> returneaza daca sirul caracter contine caracter
 *
 *      strcmp(char *sursa1, char *sursa2) -> daca sursa1 == sursa2 returneaza 0
 *                                         -> < 0 daca primul caracter din sursa1 care nu are pereche este mai mic
 *                                              alfabetic decat cel din sursa2
 *                                         -> > 0 daca primul caracter din sursa2 care nu are pereche este mai mic
 *                                              alfabetic decat cel din sursa1
 *                                              (ce conteaza e ca returneaza 0 daca sirurile sunt egale)
 *
 *      strlwr(char *sursa) -> converteste toate literele din sursa in litere mici
 *
 *      struwr(char *sursa) -> converteste toate literele din sursa in litere mari
 *
 *      strstr(char *sursa1, char *sursa2) -> returneaza NULL daca sursa2 nu este subsir al lui sursa1
 *
 *      atoi(char *sursa) -> converteste sursa la int
 *      itoa(int sursa) -> invers ^
 */

    cout << "\n----- END -----" << endl;
}
