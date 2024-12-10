#include <stdio.h>
#include <string.h>

/* // using strcat()
int main(){
    char str1[26] = "Abhishek is ";
    char str2[] = "Sant Sanskari";

    strcat(str1, str2);

    printf("%s", str1);

    return 0;
} */

/* // using loop
void loopconcat(char str1[], char str2[]) {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
        i++;
    }

    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
}

int main() {
    char str1[26] = "Abhishek is ";
    char str2[] = "Sant Sanskari";

    loopconcat(str1, str2);

    printf("%s", str1);

    return 0;
} */

/* // using pointers
void pointerconcat(char *str1, char *str2){
    while (*str1)
    {
        *str1++;
    }

    while (*str2)
    {
        *str1 = *str2;
        *str1++; *str2++;
    }

    *str1 = '\0';
}

int main(){
    char str1[26] = "Abhishek is ";
    char str2[] = "Sant Sanskari";

    pointerconcat(str1, str2);

    printf("%s", str1);

    return 0;
} */

/* // using memcpy()
int main(){
    char str1[26] = "Abhishek is ";
    char str2[] = "Sant Sanskari";

    memcpy(str1 + strlen(str1), str2, strlen(str2)+1);

    printf("%s", str1);

    return 0;
} */

/* // using sprintf()
int main(){
    char str1[26] = "Abhishek is ";
    char str2[] = "Sant Sanskari";

    sprintf(str1 + strlen(str1), "%s", str2);

    printf("%s", str1);

    return 0;
} */