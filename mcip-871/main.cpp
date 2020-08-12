#include <iostream>

using namespace std;

int main()
{
    cout << "-----\nAlgoritmiElementari \n-----\n" << endl;

    int n;
    cout << "N: ";
    cin >> n;
    
    if (n % 6 == 0)
    {
        cout << n / 6 << " " << n / 3 << " " << n / 2 << endl;
    } 
    else
    {
        cout << "nu exista" << endl;    
    }

    cout << "\n\n----- END -----" << endl;
}
