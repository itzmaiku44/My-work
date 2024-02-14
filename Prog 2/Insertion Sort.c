//insertion sort
#include <stdio.h>
void printArray(int *nums, int length);
void swap(int *a, int *b);
int main() {
    int num[] = {5,4,26,32,1,5,3,2,8};
    int c,t, temp, length;
    length = sizeof(num)/sizeof(int);
    for(c=0; c<length;c++)
    {
        for(t=c; t>0;t--)
        {
            if(num[t]<num[t-1])
            {
                swap(&num[t], &num[t-1]);
            }
        }
        printArray(num, length);
    }
    return 0;
}

void swap(int *a, int *b)
{
    int temp;
    
    temp = *a;
    *a=*b;
    *b=temp;
}

void printArray(int *nums, int length)
{
    int z;
    for(z=0; z<length;z++)
    {
        printf("%i, ",nums[z]);
    }
    printf("\n");
}