#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    cout << "----- bac -----\n"
         << endl;

    /*
   * daca lungimea lui b are mai mult de 3 caracter
   * atunci memoram in a ultimele 3 caractere
   * iar la sfarsitul lui a trebuie sa adaugam caracterul nul
   * \0
   * \0 determina sfarsitul unui sir de caracter in c
   */

    char b[] = "centaur";
    char a[20];

    int len_b = strlen(b);

    int a_index = 0;
    if (len_b > 3) {
        for (int i = len_b - 3; i < len_b; i++) {
            a[a_index++] = b[i];

            /*
       *  aste e echivalent cu
       *  a[a_index] = b[i];
       *  a_index++;
       */
        }
        a[a_index] = '\0';
    } else {
        strcpy(a, "nedeterminat");
    }

    cout << a << endl;

    cout << "\n----- END -----" << endl;
}
