#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-august-sn-s2-3 -----\n" << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 6 - i; j >= 1; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    cout << "\n----- END -----" << endl;
}