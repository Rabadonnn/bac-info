#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2020-special-s3-2 -----\n" << endl;

    char text[101];

    cin.getline(text, 101);

    bool shouldCaps = false;

    for (int i = 0; i < 101; i++) {
        if (text[i] == '<') {
            shouldCaps = true;
            continue;
        } else if (text[i] == '>') {
            shouldCaps = false;
        }

        if (shouldCaps) {
            text[i] = toupper(text[i]);
        }
    }

    cout << text << endl;

    cout << "\n----- END -----" << endl;
}
