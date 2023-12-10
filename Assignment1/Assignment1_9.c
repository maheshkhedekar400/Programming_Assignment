///////////////////////////////////////////////////////////////
// Accept the no. from user and check the no. is odd or even
//////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    if(a%2 == 0)
    {
        printf("Given no. is even");
    }
    else
    {
        printf("Given no. is odd");
    }
}