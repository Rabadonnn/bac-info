#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2020-august-s2-1 -----\n" << endl;

    unsigned int n;
    cin >> n;

    int m = 0;

    do
    {
        int c = n % 10;
        n /= 10;

        if (c < 5) {
            m = m - 2 * c;
        } else {
            m += c;
        }
    } while (n != 0);

    // b. =>

    while (n != 0) {
        int c = n % 10;
        n /= 10;

        if (c < 5) {
            m = m - 2 * c;
        } else {
            m += c;
        }
    }

    if (m == 0) {
        cout << "DA" << endl;
    } else {
        cout << m << " " << "NU" << endl;
    }

    // c => 306, 3060, etc

    cout << "\n----- END -----" << endl;
}
