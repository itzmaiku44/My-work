// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

int main() {
    
    char str[50];
    char dest[50];
    char *delim = " ";
    
    printf("Enter string to copy: ");
    gets(str);
    printf("\n");
    
    //strcpy()
    strcpy(dest, "Ash Wednesday ");
    printf("String: ");
    puts(dest);
    
    //strcat()
    strcat(dest, str);
    puts(dest);
    
    //strtok()
    char *token;
    printf("\nStrtok: \n");
    token = strtok(dest, delim);
    
    while(token){
        printf("%s\n", token);
        token = strtok(NULL, delim);
    }
    
    //memcpy()
    memcpy(dest, str, strlen(str)+1);
    printf("\nmemory copy: ");
    puts(dest);
    
    //atoi()
    int value;
    value = atoi(dest);
    printf("Atoi: %d", value);
    
    
    return 0;
}