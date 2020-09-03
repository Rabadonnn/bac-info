#include <iostream>

using namespace std;

// from hacker rank

void staircase(int n)
{
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++) {
            cout << "#";
        }
        cout << endl;
    }
}

int main()
{
    cout << "-----\nmake a staircase\n-----\n"
         << endl;
    staircase(4);
    cout << "\n----- END -----" << endl;
}
