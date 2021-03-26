#include <fstream>
#include <iostream>

using namespace std;

int main()
{
    cout << "----- bac -----\n"
         << endl;

    // cerinta a spus ca numerele din fisier sunt
    // din intervalul [0, 1000];

    // vezi vectori de frecventa
    // sintaza asta initializeaza fiecare element din vector cu 0
    int frecventa_pare[1001] = { 0 };
    int frecventa_impare[1001] = { 0 };
    int max_par = -1;
    int max_imp = -1;

    int n;
    ifstream bac_in("source/2019-august-s3-3/bac.txt");
    while (bac_in >> n) {
        if (n % 2 == 0) {
            if (n > max_par)
                max_par = n;
            frecventa_pare[n]++;
        } else {
            if (n > max_imp)
                max_imp = n;
            frecventa_impare[n]++;
        }
    }

    for (int i = 1; i <= max_imp; i++) {
        for (int ap = 1; ap <= frecventa_impare[i]; ap++) {
            cout << i << " ";
        }
    }

    for (int i = 1; i <= max_par; i++) {
        for (int ap = 1; ap <= frecventa_pare[i]; ap++) {
            cout << i << " ";
        }
    }
    cout << endl;

    bac_in.close();

    cout << "\n----- END -----" << endl;
}
