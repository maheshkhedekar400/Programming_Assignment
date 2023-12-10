//////////////////////////////////////////////////////////////
// Write a programe to find largest no. input from user.
//////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    if(a > b)
    {
        printf("a is greater than b");
    }
    else
    {
        printf("b is greater than a");
    }
}