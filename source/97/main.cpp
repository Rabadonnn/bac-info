#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- 2020-august-s3-3 -----\n" << endl;

    ifstream bac_in("source/2020-august-s3-3/bac_in.txt");


    int a = 100;
    int b = 0;

    long x;
    while (bac_in >> x) {

        // asa verificam daca numarul are 2 cifre
        if (x / 10 > 0 && x / 10 < 10) {
            if (x > b) {
                b = x;
            }
            if (x < a) {
                a = x;
            }
        }
    }

    cout << a - 1 << " " << b + 1 << endl;

    cout << "\n----- END -----" << endl;
}
