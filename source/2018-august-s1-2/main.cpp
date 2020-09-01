#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-august-s1-2 -----\n" << endl;

    int n;
    cin >> n;
    int m = 0;
    int p = 1;
    int x = 0;

    if (n < 0)
    {
        n = -n;
    }

    do
    {
        int c = n % 10;
        n = n / 10;
        if (c > m)
        {
            m = c;
        }

        x = m * p + x;
        p *= 10;
    }
    while (n != 0);

    // sau

    // while (n != 0)
    // {
        // int c = n % 10;
        // n = n / 10;
        // if (c > m)
        // {
            // m = c;
        // }

        // x = m * p + x;
        // p *= 10;
    // }
    //
    //
    // oricare dintre: 722 -722 712 -712 702 -702

    cout << x << endl;

    cout << "\n----- END -----" << endl;
}
