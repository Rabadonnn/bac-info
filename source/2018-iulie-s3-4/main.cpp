#include <iostream>
#include <fstream>

using namespace std;

int main()
{

    ifstream bacIn("source/2018-iulie-s3-4/bac.txt");

    int x;
    // = { 0 } initializeaza toate numerele din sir cu 0
    int frecventa[1000000] = { 0 };
    int result = 0;
    int localResult = 0;
    int termeni = 0;
    while (bacIn >> x) {
        frecventa[x]++;
        termeni++;
        if (termeni >= 3) {
            termeni = 0;
        }
        if (frecventa[x] >= 2 && termeni < 3) {
            for (int i = 0; i < 1000000; i++) {
                frecventa[i] = 0;
            }
            localResult = 0;
        } else {
            localResult++;
            if (localResult > result) {
                result = localResult;
            }
        }
    }

    cout << result << endl;
}
