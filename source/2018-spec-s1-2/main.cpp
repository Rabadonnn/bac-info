#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-spec-s1-2 -----\n"
         << endl;

    int n;
    int a;
    cin >> n;
    cin >> a;

    int nr = 0;
    int i = 1;

    while (i <= n)
    {
        int b;
        cin >> b;
        int c = 0;
        while (b % 2 == 0)
        {
            b /= 2;
            c++;
        }
        if (c == a)
        {
            nr++;
        }
        i++;
    }

    // a: 2
    // b: orice numar de forma 4k din interval

    for (int i = 1; i <= n; i++)
    {
        int b;
        cin >> b;
        int c = 0;
        while (b % 2 == 0)
        {
            b /= 2;
            c++;
        }
        if (c == a)
        {
            nr++;
        }
        i++;
    }

    cout << nr << endl;

    cout << "\n----- END -----" << endl;
}