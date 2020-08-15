#include <iostream>

using namespace std;


int main()
{
    cout << "-----\nbac !!! incomplete !!!\n-----\n" << endl;

    // declare matrix
    int size = 9;
    char a[size][size];

    // (REMEMBER) chars should be declared with single quotes '' not double quotes ""

    // populate matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            a[i][j] = '=';
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ( true /* place expression here */ )
            {
                a[i][j] = '*';
            }
            else
            {
                a[i][j] = '-';
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }


    cout << "\n----- END -----" << endl;
}
