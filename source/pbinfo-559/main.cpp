#include <iostream>

using namespace std;

int main()
{
    cout << "----- pbinfo -----\n" << endl;

    unsigned int v[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < 5 - 1; i++)
    {
        for (int j = 0; j < 5 - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    cout << v[4] + v[3] + v[2] << endl;

    cout << "\n----- END -----" << endl;
}
