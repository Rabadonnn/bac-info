#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-august-sn-s1-5 -----\n" << endl;

    int n = 7;
    int ok = 1;
    int d = 2;

    while (ok == 1 && d * d >= n)
    {
        if (n % d == 0)
        {
            ok = 0;
        }
        else
        {
            d++;
        }
    }

    cout << "\n----- END -----" << endl;
}