#include <iostream>

using namespace std;

int main()
{
    int n = 5;
    int v[5];

    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    for (int i = 0; i < n; i++) {
        cout << v[i] << endl;
    }
}
