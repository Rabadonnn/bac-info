#include <iostream>

using namespace std;


int main()
{
    cout << "-----\nbac\n-----\n" << endl;

    // declare matrix
    int size = 9;
    char a[size][size];

    // (REMEMBER) chars should be declared with single quotes '' not double quotes ""
    

    // explnation
    // https://www.youtube.com/watch?v=ih5tQ4evgsQ 
    // from 45:50 -> 51:00

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
            if (i > j && i + j > size - 1)
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
