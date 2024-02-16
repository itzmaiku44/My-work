#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char s[100];
    char vowel[] = {'a','e','i','o','u'};

    printf("Enter string: ");
    gets(s);

    int length = strlen(s);
    for(int i=0; i < length; i++){
        if(!isspace(s[i])){  // ignore space if its a sentence or word after word
            int isvowel = 0;
        
            for(int j=0; j < 5; j++){
                if(s[i] == vowel[j]){
                   isvowel = 1;
                    break;
                }
            }
        
            if(isvowel){
                printf("%c - Vowel\n", s[i]);
            }
            else{
                printf("%c - Consonant\n", s[i]);
                }
        }
    }
    return 0;
}

/*  Output:

Enter string: Yawaa uy
Y - Consonant
a - Vowel
w - Consonant
a - Vowel
a - Vowel
u - Vowel
y - Consonant

*/
