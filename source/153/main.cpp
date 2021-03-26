#include <iostream>

using namespace std;

int main()
{
    cout << "----- ta-3-s2-1 -----\n" << endl;

    int n;
    cin >> n;

    int c1 = n % 10;
    n /= 10;
    int c2 = n % 10;

    int s;

    if (c1 == c2) {
        s = 0;
    } else if (c1 > c2) {
        s = 1;
    } else {
        s = -1;
    }

    do {
        c1 = n % 10;
        n /= 10;
        c2 = n % 10;
    } while ((c1 - c2) * s > 0);

    cout << s << " " << n;

    // a. 1 275
    // b. 12
    //    21
    //

    cout << "\n----- END -----" << endl;
}
