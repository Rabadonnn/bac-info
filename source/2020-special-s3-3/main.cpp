#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- 2020-special-s3-3 -----\n" << endl;

    ifstream bacIn("source/2020-special-s3-3/bac-in.txt");

    int nr[1000000];
    int nrCount = 0;

    int n;
    while (bacIn >> n) {
        nr[nrCount++] = n;
    }

    long varf = -1;
    long minDif = 1000000000;
    for (int i = 1; i < nrCount - 1; i++) {
        int p = nr[i - 1];
        int x = nr[i];
        int n = nr[i + 1];

        if (x > p && x > n) {
            long absDif = abs(p - n);

            if (absDif <= minDif) {
                if (absDif < minDif) {
                    varf = x;
                }
                minDif = absDif;
                if (x > varf) {
                    varf = x;
                }
            }
        }
    }

    if (varf == -1) {
        cout << "nu exista" << endl;
    } else {
        cout << varf << endl;
    }

    cout << "\n----- END -----" << endl;
}
