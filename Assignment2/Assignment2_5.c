/////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and display its multiplication of factors. 
//Input : 12 Output : 144 (1 * 2 * 3 * 4 * 6) 
//Input : 13 Output : 1 (1) 
//Input : 10 Output : 10 (1 * 2 * 5)
////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    int sum = 1;
    for(int i=1;i<a;i++)
    {
        if(a % i == 0)
        {
            printf("%d \n",i);
           sum = sum * i;
        }
    }

    printf("Total multiplication of all factors is : %d",sum);
}