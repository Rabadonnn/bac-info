#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-august-sn-s2-1 -----\n" << endl;

    int n;
    cin >> n;
    
    int m = 0;
    // int x = 1;

    // while (x <= 9)
    // {
        // int cp = n;
        // while (cp != 0)
        // {
            // if (cp % 10 == x)
            // {
                // m = m * 10 + x;
            // }
            // cp /= 10;
        // }
        // x++;
    // }

    for (int x = 1; x <= 9; x++)
    {
        int cp = n;
        while (cp != 0)
        {
            if (cp % 10 == x)
            {
                m = m * 10 + x;
            }
            cp /= 10;
        }
    }

    cout << m << endl;

    // 11
    // 110
    // 1100
    // etc

    cout << "\n----- END -----" << endl;
}