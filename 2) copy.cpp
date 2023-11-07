#include <stdio.h>

int main()
{
	
    char Str[1000];
    int i;
 
    printf("Enter the String: ");
    scanf("%s", Str);
    
    for (i = 0; Str[i] != '\0'; i++);


    for (int j = i - 1; j >= 0; j--) {
        printf("%c", Str[j]);
    }

    printf("\n");

    return 0;
}

