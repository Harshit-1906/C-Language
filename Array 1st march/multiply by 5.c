
void main()
{
	int a[10],n,i,multiply;
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
		multiply = a[i]*5;
		printf("\nmultiply  %d",multiply );

	}

}
