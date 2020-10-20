#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- 2018-spec-s3-4 -----\n"
         << endl;

    ifstream bacIn("source/2018-spec-s3-4/bac-in.txt");

    int primaAparitie[10] = {0};
    int nr = 0;
    int lungime[10];
    int max = 0;

    int x;
    while (bacIn >> x)
    {
        nr++;
        if (primaAparitie[x] == 0)
        {
            primaAparitie[x] = nr;
        }
        else
        {
            lungime[x] = nr - primaAparitie[x] + 1;
            if (lungime[x] > max)
            {
                max = lungime[x];
            }
        }
    }

    bacIn.close();

    cout << max << endl;
    for (int i = 0; i < 10; i++)
    {
        if (lungime[i] == max)
        {
            cout << i << " ";
        }
    }

    cout << "\n----- END -----" << endl;
}
