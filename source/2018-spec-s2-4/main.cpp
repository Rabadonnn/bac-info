#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-spec-s2-4 -----\n"
         << endl;

    int a[10][10];

    // foarte destepti baietii care fac subiect, vectorii incep de la 1 dupa ei
    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j <= 9; j++)
        {
            a[i][j] = i < j ? i : j;
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}