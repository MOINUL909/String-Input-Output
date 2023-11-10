#include<stdio.h>
int main()
{
    char s1[30];
    printf("enter your full name:");
    //scanf("%s",&s1);
    gets(s1);
    printf("Full name = %s\n",s1);
    return 0;
}
