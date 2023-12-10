#/////////////////////////////////////////////////////////
#// Accept one no. from user and print that no. of * on screen(using for loop)
#////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your no. :");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        printf("*");
    }
}
