#include <iostream>
#include <cmath>

using namespace std;

struct divizor
{
    int nr;
    int mic;
};

bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << "----- 2018-spec-s2-3 -----\n"
         << endl;

    divizor d = {12, 2};

    if (isPrime(d.nr))
    {
        cout << "prim" << endl;
    }
    else if (d.nr - sqrt(d.nr) == 0)
    {
        cout << "patrat" << endl;
    }
    else
    {
        int min = d.nr;
        int max = 0;
        // there must be a better way for this though
        for (int i = 2; i < d.nr; i++)
        {
            if (d.nr % i == 0)
            {
                if (i < min)
                {
                    min = i;
                }
                else if (i > max)
                {
                    max = i;
                }
            }
        }
        cout << min << " " << max << endl;
    }

    cout << "\n----- END -----" << endl;
}