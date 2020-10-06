#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- 2018-spec-s3-4 -----\n" << endl;

    ifstream bacIn("source/2018-spec-s3-4/bac-in.txt");

    int x;
    while (bacIn >> x)
    {
        cout << x << endl;
    }

    cout << "\n----- END -----" << endl;
}
