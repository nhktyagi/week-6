#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, l;
    int a = 0;

    printf("Enter a string: ");
    scanf("%s", str);
    l = strlen(str);

    for (i = 0; i < l / 2; i++) {
        if (str[i] != str[l - i - 1]) {
            a = 1;
            break;
        }
    }

    if (a) {
        printf("%s is not a palindrome\n", str);
    } else {
        printf("%s is a palindrome\n", str);
    }

    return 0;
}


