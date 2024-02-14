#include <stdio.h>

int *getArray();
void printArray(int nums[]);
int *filter(int nums[]);

int main() {
    int *num = getArray();
    printf("---------------");
    printArray(num);
    int *even = filter(num);
    printArray(even);
    

    return 0;
}

int *getArray(){
    int i, size, arr;
    printf("Enter the number of input: ");
    scanf("%d", &size);
    int *num = (int *) malloc((size+1) * sizeof(int));
 
    for(i=0; i < size; i++){
        printf("%d. Enter number: ", i+1);
        scanf("%d", &arr);
        num[i] = arr;
        }
    num[size] = -1;
    return num;
}

void printArray(int nums[]){
    int i;
    printf("\nArrays: ");
    for(i = 0; i < sizeof(nums); i++){
        printf("%d ", nums[i]);
        
    }
}

int *filter(int nums[]){
    int i, x;
    printf("\nEven number/s: ");
    int *even = (int *) malloc(99 * sizeof(int));
    for(i = 0, x = 0; i < sizeof(nums)-1; i++){
        if(nums[i] % 2 == 0){
            even[i++] = nums[i];
        }
    }
    even[x] = -1;
    return even;
}