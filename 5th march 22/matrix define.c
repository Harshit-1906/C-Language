#include<stdio.h>
void main()
{
    int a[2][3]={11,2,3,44,5,6},i,j;
    printf("display 2d array\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


}
