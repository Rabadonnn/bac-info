#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2020-special-s2-1 -----\n" << endl;

    int n;
    cin >> n;
    int m = 0;

   for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        while (x % 10 > (x / 10) % 10) {
            x /= 10;
        }
        m += x;
    }


    // inlocuim for cu while si gata
    int i = 1;
    while (i <= n) {
        i++;

        int x;
        cin >> x;

        while (x % 10 > (x / 10) % 10) {
            x /= 10;
        }
        m += x;
    }

    if (m > 0) {
        cout << m << endl;
    } else {
        cout << "niciunul" << endl;
    }


    // la b orice, nr din interval cu cifrele strict crescatoare ex: 123 234 etc

    cout << "\n----- END -----" << endl;
}
