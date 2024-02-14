// 2D-Array (using pointer)

#include <stdio.h>
void main() {
    int x[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *z = &x;
    int i,j;
    //for(i=0;i<3;i++)
      //  for(j=0;j<3;j++)
        //    printf("%i\t", x[i][j]);
    for(j=0;j<9;j++)
        printf("%i\t", *(z+j));
}