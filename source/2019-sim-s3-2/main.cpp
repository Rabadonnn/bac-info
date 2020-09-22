#include <iostream>

using namespace std;

int main()
{
    cout << "----- 2019-sim-s3-2 -----\n" << endl;

    const char *fullNames[4];
    fullNames[0] = "COLEGIUL";
    fullNames[1] = "LICEUL";
    fullNames[2] = "NATIONAL";
    fullNames[3] = "TEORETIC";

    const char *abbreviations[4];
    abbreviations[0] = "COLEG.";
    abbreviations[1] = "LIC.";
    abbreviations[2] = "NAT.";
    abbreviations[3] = "TEOR.";

    char text[] = "COLEG. NAT. DE INFORMATICA";

    char *token = strtok(text, " ");

    char result[100];

    while (token) {

        int n = strlen(result);

        bool found = false;
        for (int i = 0; i < 4; i++) {
            if (strcmp(token, abbreviations[i]) == 0) {
                found = true;
                sprintf(&result[n], "%s ", fullNames[i]);
                break;
            }
        }
        if (!found) {
            sprintf(&result[n], "%s ", token);
        }

        token = strtok(NULL, " ");
    }

    cout << result << endl;

    cout << "\n----- END -----" << endl;
}
