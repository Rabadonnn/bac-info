#include <iostream>

using namespace std;

void afiseaza_tablou(unsigned int t[6][4])
{
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 4; j++) {
            cout << t[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

int main()
{
    cout << "----- 2020-august-s2-3 -----\n" << endl;

    unsigned int a[6][4] =
    {
        { 2, 3, 4, 5 },
        { 7, 7, 8, 5 },
        { 1, 3, 5, 7 },
        { 3, 0, 2, 9 },
        { 3, 5, 1, 6 },
        { 7, 3, 0, 2 }
    };

    afiseaza_tablou(a);

    int indici[6];

    int count = 0;
    for (int i = 0; i < 6; i++) {
        if (a[i][2] % 2 == 0) {
            indici[count++] = i;
        }
    }

    for (int i = 0; i < count - 1; i++) {
        for (int j = 0; j < count - 1 - i; j++) {
            if (a[indici[j + 1]][2] < a[indici[j]][2]) {
                int temp = a[indici[j + 1]][2];
                a[indici[j + 1]][2] = a[indici[j]][2];
                a[indici[j]][2] = temp;
            }
        }
    }

    afiseaza_tablou(a);

    cout << "\n----- END -----" << endl;
}
