////////////////////////////////////////////////////////////////
//Write a program which accept one number from user and print that number of even numbers on screen. 
//Input : 7 
//Output: 2 4 6 8 10 12 14
///////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int i = 2;
    while(i<=(a*2))
    {
        printf("%d ",i);
        i = i+2;
    }    
}