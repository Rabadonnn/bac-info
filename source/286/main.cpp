#include <cstring>
#include <iostream>

using namespace std;

// https://leetcode.com/problems/longest-substring-without-repeating-characters/

int lengthOfSubstring(char *s) {
  int len = 0;
  int maxlen = 0;

  char map[201] = {0};

  for (int i = 0; i < strlen(s); i++) {
    int found = 0;

    for (int j = 0; j < 200; j++) {
      if (map[s[i]] > 0) {
        if (++len > maxlen) {
          maxlen = len;
        }
        len = 0;
        found = 1;
        for (int k = 0; k < 200; k++) {
          map[k] = 0;
        }
      }
    }
    if (!found) {
      map[s[i]]++;
      if (++len > maxlen) {
        maxlen = len;
      }
    }
  }

  return maxlen;
}

int main() {
  char s1[] = "aab";
  cout << lengthOfSubstring(s1) << endl;
  char s2[] = "bbbbbb";
  cout << lengthOfSubstring(s2) << endl;
  char s3[] = "pwwkew";
  cout << lengthOfSubstring(s3) << endl;
}
