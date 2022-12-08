#include<stdio.h>
void main()
{
   int a=0,b=1,c,i;
   printf("%d\t%d\t",a,b);
   for(i;c<=100000;i++)
   {
       c=a+b;
       printf("%d\t",c);
       a=b;
       b=c;
   }

}
