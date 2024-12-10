#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* // using nested loops
char nestedLoopCheck(char str[]) {
    int len = strlen(str);

    for (int i = 0; i < len; i++) {
        bool repeating = false;
        for (int j = i + 1; j < len; j++) {
            if (str[i] == str[j]) {
                repeating = true;
                break;
            }
        }
        if (repeating == false) {
            return str[i];
        }
    }

    return '$';
}

int main() {
    char str[] = "racecar";

    printf("%c", nestedLoopCheck(str));
    return 0;
} */

/* // using a frequency array
char freqArrayCheck(char str[]) {
    int freq[26] = {0};

    for (int i = 0; str[i] != '\0'; i++) {
        freq[str[i] - 'a']++;
    }

    for (int i = 0; str[i] != '\0'; i++) {
        if (freq[str[i] - 'a'] == 1) {
            return str[i];
        }
    }
    return '$';
}

int main() {
    char str[] = "racecar";

    printf("%c", freqArrayCheck(str));
    return 0;
} */

/* // using indices array
char storingIndicesCheck(char str[]) {
    // stores -1 for all default, their index if appeared once, and -2 if repeated
    int indices[26];
    for (int i = 0; i < 26; i++) {
        indices[i] = -1;
    }

    for (int i = 0; str[i] != '\0'; i++) {

        if (indices[str[i] - 'a'] == -1) {
            indices[str[i] - 'a'] = i;
        } else {
            indices[str[i] - 'a'] = -2;
        }
    }

    int min = 26;
    for (int i = 0; i < 26; i++) {
        if (indices[i] >= 0 && indices[i] < min) {
            min = indices[i];
        }
    }

    return min == 26 ? '$' : str[min];
}

int main() {
    char str[] = "racecar";

    printf("%c", storingIndicesCheck(str));
    return 0;
} */