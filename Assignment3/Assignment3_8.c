//////////////////////////////////////////////////
//Given two positive numbers X and Y, check if Y is a power of X or not.
//X = 2, Y = 8
//Output:
//1
//Explanation:
//2^3 is equal to 8.
///////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);

    //int c = a*a*a;

    if(a*a*a == b)
    {
        printf("%d",1);
    }
    else
    {
        printf("%d",0);
    }
}