#include <iostream>

using namespace std;

int div_sum(int a) {
    int div_sum = 0;

    for (int i = 1; i <= a; i++) {
        div_sum += a % i == 0 ? i : 0;

        // expresia esta e echivalenta cu
        // if (a % i == 0) {
        //      div_sum += i;
        // }
        // syntactic sugar
    }
    return div_sum;
}

int kpn(int a, int b, int k)
{
    int p_nr_count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 2 == 0 && div_sum(i) % 2 == 0) {
            // cauta diferenta dintre ++i si i++
            if (++p_nr_count == k) {
                return i;
            }
        }
    }
    return -1;
}

int main()
{
    cout << "----- 2020-august-s3-1 -----\n" << endl;

    cout << kpn(27, 50, 3) << endl;

    cout << "\n----- END -----" << endl;
}
