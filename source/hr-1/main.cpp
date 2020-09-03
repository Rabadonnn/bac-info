#include <iostream>

using namespace std;

/*
 * Given five positive integers, find the minimum and maximum values that
 * can be calculated by summing exactly four of the five integers.
 * Then print the respective minimum and maximum values as a single
 * line of two space-separated long integers.

    Example

    arr = [ 1, 3, 5, 7, 9 ]
    min_sum = 16
    max_sum = 24
 */

int main()
{
    cout << "-----\nhacker-rank mini-max-sum\n-----\n"
         << endl;

    int len = 5;
    int arr[] = { 1, 3, 5, 7, 9 };

    int min_sum = 0;
    int max_sum = 0;

    int min_n = arr[0];
    int max_n = arr[0];

    for (int i = 0; i < len; i++) {
        if (arr[i] > max_n) {
            max_n = arr[i];
        } else if (arr[i] < min_n) {
            min_n = arr[i];
        }
        min_sum += arr[i];
        max_sum += arr[i];
    }

    min_sum -= max_n;
    max_sum -= min_n;

    cout << min_sum << " " << max_sum << endl;

    cout << "\n----- END -----" << endl;
}
