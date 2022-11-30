#include<stdio.h>
void main()
{
	int a[10],n,i;
	printf("enter the total no. of elements ");
	scanf("%d",&n);
	printf("enter array elements ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("display array elements\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
	for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
             printf("\n%d is even",a[i]);
             break;
             else
             printf("\n%d is odd",a[i]);

        }




    }
}
