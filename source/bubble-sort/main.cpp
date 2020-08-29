#include <iostream>

using namespace std;

int main()
{
    cout << "----- bubble sort -----\n" << endl;

    // cea mai simpla metoda de sortare

    int n = 6;
    int v[] = { 50, 10, 65, 43, 100, 4 };

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << endl;

    cout << "\n----- END -----" << endl;
}
