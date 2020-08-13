#include <iostream>
#include <cmath>

using namespace std;

// https://www.pbinfo.ro/probleme/1289/cifregen2
// Se dă un număr natural n. Să se genereze toate numerele cu exact n cifre prime.

void convert_to_base(int n, int v[], int vec_len, int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << v[n % vec_len];
        n /= vec_len;
    }

    cout << endl;
}

void backtrack(int v[], int vec_len, int len)
{
    for (int i = 0; i < (int)pow(vec_len, len); i++)
    {
        convert_to_base(i, v, vec_len, len);
    }
}

int main()
{
    cout << "-----\nBacktracking\n-----\n" << endl;

    int n;
    cout << "N: ";
    cin >> n;

    int primeNumbers[] = { 2, 3, 5, 7 };
    backtrack(primeNumbers, 4, n);

    cout << "\n----- END -----" << endl;
}
