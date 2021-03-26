#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream bacIn("source/2019-august-sn-s3-3/bac-in.txt");

    int frecventa[1000] = { 0 };

    int x;
    int max = 0;
    while (bacIn >> x)
    {
        if (x % 2 == 0)
        {
            frecventa[x]++;
            if (x > max)
            {
                max = x;
            }
        }
    }

    for (int i = 0; i <= max; i++)
    {
        for (int j = 0; j < frecventa[i]; j++)
        {
            cout << i << " ";
        }
    }
    cout << endl;
}