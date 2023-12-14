////////////////////////////////////////////////////////////////
//Write a program which accept number from user and display its digits in reverse order. 
//Input : 2395 
//Output : 
//5 
//9 
//3 
//2 
//Input : 1018 
//Output : 
//8 
//1 
//0 
//1
//////////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a(minimum 4 digit) : ");
    scanf("%d",&a);

    int reverse;
    while(a > 0)
    {
        reverse = a % 10;
        printf("%d \n",reverse);
        a = a / 10;
    }
}