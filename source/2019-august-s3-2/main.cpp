#include <iostream>

using namespace std;

int main()
{
    cout << "----- bac -----\n" << endl;

    int n = 5;

    unsigned int mat[5][5] = {
        { 2, 2, 2, 2, 2 },
        { 2, 2, 2, 2, 8 },
        { 2, 2, 2, 2, 2 },
        { 2, 1, 2, 8, 7 },
        { 3, 5, 2, 1, 8 }
    };

    // nu mai citesc de la tastatura sa nu pierd timpu

    int dim = 0;
    int el = mat[0][0];

    // nici eu nu stiu ce am facut aicea
    for (int i = 2; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (mat[j][i - 1] != el)
            {
                dim = i - 1;
            }
        }
        for (int k = 0; k < i; k++)
        {
            if (mat[i - 1][k] != el)
            {
                dim = i - 1;
            }
        }
        if (dim != 0) break;
    }

    cout << dim << endl;

    cout << "\n----- END -----" << endl;
}
