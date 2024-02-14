//bubble sort
#include <stdio.h>
void printArray(int *nums, int length);
int main() {
    int num[] = {5,4,26,32,1,5,3,2,8};
    int x,y, temp, length;
    length = sizeof(num)/sizeof(int);
    for(x=0; x<(sizeof(num)/sizeof(int))-1;x++)
    {
        for(y=0; y<(sizeof(num)/sizeof(int))-1;y++)
        {
            if(num[y]>num[y+1])
            {
                temp = num[y];
                num[y]=num[y+1];
                num[y+1] = temp;
            }
        }
        printArray(num, length);
    }
    

    return 0;
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