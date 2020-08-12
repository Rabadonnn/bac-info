#include <iostream>

using namespace std;

int main()
{
    cout << "-----\nbac\n-----\n" << endl;
    
    int n;
    cin >> n;

    int k = 0;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        int y = 2;

        while (x > 1 && x % y != 0)
        {
            y++;
        }

        if (k < x / y)
        {
            k = x / y;
        }
    }

    cout << k << endl;

    cout << "\n----- END -----" << endl;
}
