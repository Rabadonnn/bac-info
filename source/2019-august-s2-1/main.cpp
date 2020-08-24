#include <iostream>

using namespace std;

int main()
{
    cout << "----- bac -----\n" << endl;

    unsigned int n = 27102;

    int m = 0;
    int x = 1;

    while (x <= 9)
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
        x++;
    }

    cout << m << endl;

    // (A) 1227

    // (B) 1100 1001 1010

    cout << "\n----- END -----" << endl;
}
