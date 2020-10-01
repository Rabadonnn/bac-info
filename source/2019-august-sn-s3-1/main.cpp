#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-august-sn-s3-1 -----\n"
         << endl;

    int a = 14;
    int b = 19;

    int result = 0;
    for (int i = b; i >= a; i--)
    {
        int p = 1;
        for (int j = 1; j <= i; j++)
        {
            if (j % i == 0 && j % 2 == 0)
            {
                p *= j;
            }
        }
        if (p >= i)
        {
            result = i;
            break;
        }
    }
    
    cout << result << endl;

    cout << "\n----- END -----" << endl;
}