#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-august-sn-s3-2 -----\n" << endl;

    int n;
    cin >> n;

    int v[n];

    int result = 1;
    bool done = false;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (i > 0)
        {
            if (v[i] == v[i - 1])
            {
                result++;
            }
            else
            {
                done = true;
            }
        }
    }
    
    cout << result << endl;

    cout << "\n----- END -----" << endl;
}