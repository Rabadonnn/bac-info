#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char text[] = "2,7 minus 3,5 minus 2 egal 2,7 plus -3,5 plus -2 egal -0.2 rezultat";

    char *token = strtok(text, " ");
    char result[100] = "";
    while (token) {
        float x = strtod(token, NULL);
        if (x >= 0) {
            strcat(result, token);
            strcat(result, " ");
        }
        cout << x << endl;
        token = strtok(NULL, " ");
    }

    cout << result << endl;
}
