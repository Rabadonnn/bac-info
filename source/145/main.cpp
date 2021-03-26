#include <iostream>

using namespace std;

int main()
{
    cout << "----- ta-2-s2 -----\n" << endl;

    int step = 1;

    int n;
    cin >> n;
    int m = 0;

    do {
        int c = n % 10;
        n /= 10;

        if (c == 0) {
            c = 2;
        } else if (c % 2 == 0) {
            c = 0;
        }

        m = m * 10 + c;

        cout << step++ << ": "<< n << " " << c << " " << m << endl;
    } while (n != 0);

    // nr de forma x0y0z, x, y, z % 2 == 0

    /*
    while (n != 0) {
        int c = n % 10;
        n /= 10;

        if (c == 0) {
            c = 2;
        } else if (c % 2 == 0) {
            c = 0;
        }

        m = m * 10 + c;

        cout << step++ << ": "<< n << " " << c << " " << m << endl;
    }
    */
    cout << m << endl;

    cout << "\n----- END -----" << endl;
}
