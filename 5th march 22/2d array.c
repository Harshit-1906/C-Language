#include<stdio.h>
#define Max_row 3
#define Max_col 3

void main()
{
    int a[Max_row][Max_col],i,j,f,b,row,col,row1,col1;
    printf("enter the total no. of row & col");
    scanf("%d%d",&row,&col);
    printf("enter 2d Array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Display 2d Array\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }

    for(f=0;f<row;f++)
    {
        for(b=0;b<col;b++)
        {
            scanf("%d",&a[f][b]);
        }
    }
    printf("Display 2d Array\n");
    for(f=0;f<row;f++)
    {
        for(b=0;b<col;b++)
        {
            printf("%d\t",a[f][b]);

        }
        printf("\n");
    }
}
