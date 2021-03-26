#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-iulie-s1-2 -----\n" << endl;

    int n;
    cin >> n;

    if (n < 0) {
        n = -n;
    }

    int s = 0;

    // do {
        // int x = n % 10;

        // for (int i = 0; i < x; i++) {
            // s += x;
        // }

        // n /= 10;
    // } while (n != 0);

    // sau

    while (n != 0) {
        int x = n % 10;

        s += x * x;

        n /= 10;
    }
    //
    // B: 86, 68, 806, 608

    cout << s << endl;

    cout << "\n----- END -----" << endl;
}
