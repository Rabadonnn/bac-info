#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-spec-s2-3 -----\n" << endl;

    int a[5][5];

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            a[i][j] = 5 - (j < i ? j : i);
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}