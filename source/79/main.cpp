#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream bacIn("source/2019-sim-s3-3/bacIn.txt");

    int n;
    bacIn >> n;

    int parSir1 = -1;
    int imparSir1 = -1;
    int parSir2 = 1000000;
    int imparSir2 = 1000000;

    int x;

    for (int i = 0; i < n; i++) {
        bacIn >> x;
        if (x % 2 == 0) {
            parSir1 = max(parSir1, x);
        } else if (x % 2 == 1) {
            imparSir1 = max(imparSir1, x);
        }
    }

    for (int i = 0; i < n; i++) {
        bacIn >> x;
        if (x % 2 == 0) {
            parSir2 = max(parSir2, x);
        } else if (x % 2 == 1) {
            imparSir2 = max(imparSir2, x);
        }
    }

    if (parSir1 < imparSir2 && imparSir1 < parSir2) {
        cout << "DA" << endl;
    } else {
        cout << "NU" << endl;
    }
}
