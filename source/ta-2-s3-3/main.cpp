#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    cout << "----- ta-2-s3-3 -----\n" << endl;
    ifstream bacin("source/ta-2-s3-3/bac.in");

    int result[3] = {0};

    int x;
    while (bacin >> x) {
        for (int i = 2; i >= 0; i--) {
            if (x > result[i] && x % 100 == 20) {
                result[i] = x;
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    bacin.close();
    cout << "\n----- END -----" << endl;
}
