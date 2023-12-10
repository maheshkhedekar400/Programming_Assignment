/////////////////////////////////////////////////////////
// Write a programe in C to check given no. is divisible by 5 or not.
////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your number: ");
    scanf("%d",&a);
    if(a % 5 == 0)
    {
        printf("Given no. is divisible by 5");
    }
    else
    {
        printf("Given no. is not divisible by 5");
    }
}