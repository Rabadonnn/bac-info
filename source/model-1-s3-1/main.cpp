#include <iostream>

using namespace std;

void putere(int n, int &d, int &p)
{
    d = 2;
    int resultp = 0;
    int resultd = 0;

    while (n > 1)
    {
        p = 0;
        while (n % d == 0)
        {
            p++;
            n /= d;
        }

        if (p > 0 && p >= resultp)
        {
            resultp = p;
            resultd = d;
        }
        d++;
    }

    p = resultp;
    d = resultd;
}

int main()
{
    cout << "----- model-1-s3-1 -----\n" << endl;

    int d;
    int p;
    putere(10780, d, p);
    cout << d << " " << p << endl;

    cout << "\n----- END -----" << endl;
}
