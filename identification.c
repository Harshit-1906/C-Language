#include<stdio.h>
#include<conio.h>
#include<string.h>

main(){
char name[20];
char password[10];
printf("Enter username: ");
scanf("%s",name);
printf("Enter password: ");
scanf("%s",password);
if (strcmp(name, "Admin") == 0 && strcmp(password, "Admin") == 0)
printf("Access granted\n");
else printf("Access denied\n");


getch();
}
