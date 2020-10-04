#include <iostream>

using namespace std;

int Egal(int n)
{
    int lastImp = 0;
    while (n != 0)
    {
        int c = n % 10;
        n /= 10;

        if (c % 2 == 1)
        {
            if (lastImp != 0 && lastImp != c)
            {
                return 0;
            }
            lastImp = c;
        }
    }
    return 1;
}

int main()
{
    cout << "----- 2019-spec-s3-1 -----\n"
         << endl;

    cout << Egal(7240) << endl;

    cout << "\n----- END -----" << endl;
}