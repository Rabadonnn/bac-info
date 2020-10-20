#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    cout << "----- model-1-s2-3 -----\n"
         << endl;

    int k = 'a' - 'A';
    char a[100];
    strcpy(a, "VIcToriE");

    cout << strlen(a);

    // this swaps uppercase to lowecase and lowercase to uppercase
    for (int i = 0; i < strlen(a); i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
        {
            a[i] = a[i] + k;
        }
        else
        {
            a[i] = a[i] - k;
        }
    }

    cout << a << endl;

    cout << "\n----- END -----" << endl;
}