#include <stdio.h>

int *getArray();
void printArray(int nums[]);
int *filterArray(int nums[]);

void main() {
    int *arrayValues = getArray();
    printArray(arrayValues);
    printf("\n");
    int *filteredArray = filterArray(arrayValues);
    printArray(filteredArray);
}
int *filterArray(int nums[])
{
    int x,y;
    int newArray = (int)malloc(20*sizeof(int));
    for(x=0,y=0;nums[x]!=-1; x++)
    {
        if(nums[x]%2==0)
        {
            newArray[y++]=nums[x];
        }
    }
    newArray[y] = -1;
    return newArray;
}
int *getArray()
{
    int x,y, temp;
    printf("Enter the number Input: ");
    scanf("%i", &x);
    int *num = (int *) malloc((x+1) * sizeof(int));
    for(y=0; y<x; y++)
    {    
        scanf("%i", &temp);
        num[y] = temp;
    }
    num[y] = -1;
    return num;
}

void printArray(int nums[])
{
    int x;
    for(x=0; nums[x]!=-1;x++)
        printf("%i\t", nums[x]);
}