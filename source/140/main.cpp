#include <cstring>
#include <iostream>

using namespace std;

int main()
{
    cout << "----- pbinfo -----\n"
         << endl;

    char vowels[] = "aeiou";

    char sentence[255];
    cin.getline(sentence, 255);

    int sentence_len = strlen(sentence);

    int result = 0;

    for (int i = 1; i < sentence_len - 1; i++) {
        if (strchr(vowels, sentence[i]) && !strchr(vowels, sentence[i - 1]) && !strchr(vowels, sentence[i + 1]) && sentence[i - 1] != ' ' && sentence[i + 1] != ' ') {
            result++;
        }
    }

    cout << result << endl;

    cout << "\n----- END -----" << endl;
}
