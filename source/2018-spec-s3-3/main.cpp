#include <iostream>

using namespace std;

int echilibrat(int n)
{
    int parsum = 0;
    int impsum = 0;

    while (n != 0)
    {
        int c = n % 10;
        n /= 10;

        if (c % 2 == 0)
        {
            parsum += c;
        }
        else
        {
            impsum += c;
        }
    }

    return (parsum % 2 == 0 && impsum % 2 == 1);
}

int main()
{
    cout << "----- 2018-spec-s3-3 -----\n" << endl;

    cout << echilibrat(11211) << endl;

    cout << "\n----- END -----" << endl;
}
