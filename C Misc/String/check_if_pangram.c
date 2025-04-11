// A pangram is a sentence containing every letter in the English Alphabet

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool isPangram(char str[]) {
    bool arr[26] = {false};
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        if ('a' <= str[i] && str[i] <= 'z') {
            arr[str[i] - 'a'] = true;
        } else if ('A' <= str[i] && str[i] <= 'Z') {
            arr[str[i] - 'A'] = true;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (arr[i] == false) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[] = "The quick brown fox jumps over the lazy dog";

    bool pangram = isPangram(str);

    if (pangram) {
        printf("The string is a Pangram");
    } else {
        printf("The string is not a Pangram");
    }

    return 0;
}