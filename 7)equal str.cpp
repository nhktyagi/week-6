#include <stdio.h>

int main() {
    char str1[100];
	char str2[100];
	
	
	printf("Enter the first String: ");
    scanf("%s", str1);  
    printf("Enter the second String: ");
    scanf("%s", str2); 
    int isEqual = 1; 

    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++) {
        if (str1[i] != str2[i]) {
            isEqual = 0; 
            break;
        }
    }

    if (isEqual) {
        printf("The strings are equal.\n");
    } else {
        printf("The strings are unequal.\n");
    }

   }
