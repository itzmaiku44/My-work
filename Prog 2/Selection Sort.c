//selection sort
#include <stdio.h>
void printArray(int *nums, int length);
void swap(int *a, int *b);
int main() {
    int num[] = {5,4,26,32,1,5,3,2,8};
    int c,m,t, temp, length;
    length = sizeof(num)/sizeof(int);
    for(c=0; c<length-1;c++)
    {
        for(m=c, t=c+1; t<length;t++)
        {
            if(num[m]>num[t])
            {
                m=t;
            }
        }
        swap(&num[c], &num[m]);
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