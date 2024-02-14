// Malloc() 
#include <stdio.h>

int *askUser();
void printNum(int num[]);

int main() {
    int *a = askUser();
    printNum(a);

    return 0;
}

int *askUser(){
    int *a = (int *) malloc(5 * sizeof(int)); //5 is size of the array
    int i;
    for(i= 0; i < 5 ; i++){
        printf("[%d] Enter number: ", i+1);
        scanf("%d", &a[i]);
    }
    return a;
}

void printNum(int num[]){
    int x;
    for(x = 0; x < 5; x++){
        printf("%d ", num[x]);
    }
    
}