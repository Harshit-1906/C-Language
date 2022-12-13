#include<stdio.h>
void main()
{

    char s1[20],s2[10];
    int i=0,j=0;
    printf("enter the value of string1\n");
    scanf("%s",s1);
    printf("enter the value of string2\n");
    scanf("%s",s2);
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;

    }
    s1[i]='\0';
    printf("%s",s1);
}
