#include <stdio.h>

int main() {
	
	char Str1[100];
	char Str2[100];
	
	
	printf("Enter the first String: ");
    scanf("%s", Str1);  
    printf("Enter the second String: ");
    scanf("%s", Str2); 
    char concatenated[100]; 
    int i, j;

   
    for (i = 0; Str1[i] != '\0'; i++) {
        concatenated[i] = Str1[i];
    }

    
    for (j = 0; Str2[j] != '\0'; j++) {
        concatenated[i + j] = Str2[j];
    }

    concatenated[i + j] = '\0'; 

    printf("Concatenated string: %s\n", concatenated);

    return 0;
}

