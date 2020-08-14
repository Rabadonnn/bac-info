#include <iostream>

using namespace std;

// https://www.codesdope.com/blog/article/generating-permutations-of-all-elements-of-an-arra/

void show(int v[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

void swap(int &a, int &b)
{
    int c = a;
    a = b;
    b = c;
}

// print permutations of the given array
// 1: array
// 2: satrting index
// 3: ending index

void backtrack(int a[], int start, int end)
{
    // base case
    if (start == end)
    {
        show(a, end + 1);
        return;
    }

    for (int i = start; i <= end; i++)
    {
        swap(a[start], a[i]);
        backtrack(a, start + 1, end);
        swap(a[start], a[i]);
    }
}

int main()
{
    cout << "-----\nBacktracking\n-----\n" << endl;

    int n = 0;
    cout << "N: ";
    cin >> n;

    int v[n];
    for (int i = 0; i < n; i++)
    {
        v[i] = i + 1;
    }

    backtrack(v, 0, n - 1);

    cout << "\n----- END -----" << endl;
}
