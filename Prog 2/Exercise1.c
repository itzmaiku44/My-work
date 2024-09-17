#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>


void reverse(char str[]) {
    int length = strlen(str);
    int i;
    printf("reverse: ");
    for (i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    printf("\n");
}

void countWord(char str[]){
    int length = strlen(str);
    int count = 0;
    
    if(length != 0){
        count++;
        for(int i = 0; i <= length-1; i++ ){
            if(str[i] == ' '){
              count++;
            }
        }
    }
    printf("Number of Words: %d\n", count);
}

int isDigitOnly(char str[]){
    
    int i = 0;
    
    while(str[i] != '\0'){
        if(!isdigit(str[i])){
            return 0;
        }
        i++;
    }
    
    return 1;
    
}

int findFirstChar(char str[], char find){
    int i = 0;
    
    while(str[i] != '\0'){
        if(str[i] == find){
            return i;
        }
        i++;
    }
    return -1;
}


int* transferInRange(int arr[], int n, int low, int high, int* newN){
    
    //size of new array base on the range
    *newN = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= low && arr[i] <= high){
            (*newN)++;
        }
    }
    
    //Transfer element within the range from array to new Array
    int* newArr = (int*)malloc(*newN * sizeof(int));
    int j=0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= low && arr[i] <= high){
            newArr[j++] = arr[i];
        }
    }
    
    return newArr;
    
}

void transferPosNeg (int* arr,int n, int** posArr, int* posSize, int** negArr, int* negSize){
    
    int posCount = 0, negCount = 0;
    //count positive and negative Number
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) posCount++;
        if(arr[i] < 0) negCount++;
    }
    
    *posArr = (int*)malloc(posCount * sizeof(int));
    *negArr = (int*)malloc(negCount * sizeof(int));
    
    
    //Reset counters for storing of elements
    posCount = 0;
    negCount = 0;
    
    //Transfer elements to its arrays
    for(int i = 0; i < n; i++){
        if(arr[i] > 0) (*posArr)[posCount++] = arr[i];
        if(arr[i] < 0) (*negArr)[negCount++] = arr[i];
    }
    
    //set the size of positive and negative arrays
    *posSize = posCount;
    *negSize = negCount;
    
}



int main() {
    char str[100];
    int word = 0;
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str); // To handle spaces in the input
    reverse(str);
    
    //-------------------------------------------------------
    countWord(str);
    printf("The string contains %s\n", isDigitOnly(str) ? "only digits." : "non-digit characters.");
    
    //--------------------------------------------------------
    char find;
    printf("\nEnter a character to find: ");
    scanf("%c", &find);
    
    int index = findFirstChar(str, find);
    (index != -1) ? printf("First occurence of '%c' is at index %d\n", find, index) :
                    printf("Character '%c' not found in the string\n", find);
    
    
    
    //--------------------------------------------------------
    int n, low, high, newN;
    
    printf("\nEnter the size of the array: ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n; i++){
        printf("Enter element [%d]: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("\n");
    printf("Enter Low Range: ");
    scanf("%d", &low);
    printf("Enter High Range: ");
    scanf("%d", &high);
    
    int *newArr = transferInRange(arr, n, low, high, &newN);
    printf("Elements in range [%d, %d]: ", low, high);
    if(newN == 0){
        printf("No elements in range\n");
    }else {
        for(int i = 0; i < newN; i++){
            printf("%d", newArr[i]);
            
            if(i != newN-1){
                printf(", ");
            }
        }
        printf("\n");
    }
                
                
    free(newArr);
    printf("\n");
    
    //--------------------------------------------------------
    int n2, posSize = 0, negSize = 0;
    int* posArr = NULL;
    int* negArr = NULL;
    
    printf("Enter the size of array: ");
    scanf("%d", &n2);
    
    int arr2[n2];
    printf("Enter the elements of the array:\n");
    for(int i = 0; i < n2; i++){
        printf("Enter element [%d]: ", i+1);
        scanf("%d", &arr2[i]);
    }
    
    transferPosNeg(arr2, n2, &posArr, &posSize, &negArr, &negSize);
    
    //print POSITIVE numbers
    printf("Positive numbers: ");
    for(int i = 0; i < posSize; i++){
        printf("%d", posArr[i]);
        
        if(i != posSize-1){ // Comma separator
            printf(", ");
        }
    }
    printf("\n");
    
    //print NEGATIVE numbers
    printf("Positive numbers: ");
    for(int i = 0; i < negSize; i++){
        printf("%d", negArr[i]);
        
        if(i != negSize-1){ // Comma separator
            printf(", ");
        }
    }
    printf("\n");
    
    free(negArr);
    free(posArr);
    
    
    
    
    
    
    return 0;
}
