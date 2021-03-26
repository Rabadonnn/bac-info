#include <iostream>

using namespace std;

int factorial(int n)
{
    if (n < 2) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    cout << "-----\nSa se scrie o functie recursiva care returneaza \n "
            "factorialul unui numar\n-----\n"
         << endl;

    cout << "N: ";
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    cout << "\n----- END -----" << endl;
}
