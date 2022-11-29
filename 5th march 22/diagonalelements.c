#include<stdio.h>
void main()
{
    int a[3][3],i,j;
    printf("enter 2d array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }

    }

    printf("display 2d array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
     printf("display digonal lements  array\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                printf("%d\t",a[i][j]);
            }
        }
        printf("\n");
    }


}
