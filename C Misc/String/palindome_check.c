#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

bool palindromeCheck(char str[]) {
    int left = 0, right = strlen(str) - 1;

    for (; left < right; left++, right--) {

        while (left < right && !isalnum(str[left]))
            left++;
        while (left < right && !isalnum(str[right]))
            right--;

        if (tolower(str[left]) != tolower(str[right])) {
            return false;
        }
    }

    return true;
}

int main() {
    char str[] = "A man, a plan, a canal, Panama!";

    bool is_pal = palindromeCheck(str);

    if (is_pal) {
        printf("\"%s\" is a palindrome!", str);
    } else {
        printf("%s is not a palindrome!", str);
    }

    return 0;
}