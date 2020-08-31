#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- 2019-iulie-s3-3 -----\n" << endl;

    ifstream bac_in("source/2019-iulie-s3-3/bac_in.txt");

    int x;

    int max;
    int ok = 0;

    bac_in >> x;
    max = x;

    cout << x << " ";

    while (bac_in >> x)
    {
        if (x < max)
        {
            ok = 1;
        }
        if (x > max || (x == max && ok == 0))
        {
            max = x;
            cout << x << " ";
            ok = 0;
        }
    }

    bac_in.close();

    cout << "\n----- END -----" << endl;
}
