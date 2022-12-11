#include<stdio.h>
int Factorial(int n);
void main()
{
    int a,Result;
    printf("enter the number");
    scanf("%d",&a);
    Result=Factorial(a);
    printf("Result is %d",Result);
}
int Factorial(int n)
{
    int fact=1;
	while(n>=1)
	{
		fact = fact * n;
		n-- ;
	}
	return fact;
}
