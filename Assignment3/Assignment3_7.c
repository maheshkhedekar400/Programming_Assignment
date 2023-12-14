/////////////////////////////////////////////
//Given a positive integer, N. Find the factorial of N.
//N = 5
//Output:
//120
//Explanation:
//5*4*3*2*1 = 120
//////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int factorial = 1;
    for(int i=1;i<=a;i++)
    {
        factorial = factorial * i;
    }

    printf("%d",factorial);
}