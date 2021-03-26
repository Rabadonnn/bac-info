#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2018-iulie-s2-5 -----\n" << endl;

    // dogshit

    char word[] = "etalon";
    char code[] = "025843";

    char temp[strlen(word) + 1];

    if (strlen(code) != strlen(word)) {
        cout << "cod incorect" << endl;
    } else {

        int current_index = 0;
        int len = strlen(code);

        for (int i = len - 1; i >= 0; i--) {
            int digit = code[i] - '0';
            if (digit % 2 == 1) {
                temp[current_index++] = word[i];
            }
        }

        temp[current_index++] = word[0];

        for (int i = 1; i < len; i++) {
            int digit = code[i] - '0';

            if (digit % 2 == 0) {
                temp[current_index++] = word[i];
            }
        }

        char result[len + 1];

        for (int i = 0; i < current_index; i++) {
            result[i] = temp[current_index - 1 - i];
        }

        cout << result << endl;
    }

    cout << "\n----- END -----" << endl;
}
