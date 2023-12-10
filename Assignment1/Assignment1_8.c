#/////////////////////////////////////////////////////////
#// Accept two no.s from user and display first no. in second no. of times.
#////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    int i = 1;
    while(i<=b)
    {
        printf("%d ",a);
        i++;
    }
}