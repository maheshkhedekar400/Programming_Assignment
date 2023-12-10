#/////////////////////////////////////////////////////////
#// Accept one no. from user and print that no. of * on screen(using while loop)
#////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your no. :");
    scanf("%d",&a);
    printf("a=%d \n",a);

    while(a>0)
    {
        printf("*\n");
        a--;
    }
}