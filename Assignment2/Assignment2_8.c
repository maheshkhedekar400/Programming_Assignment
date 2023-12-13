//////////////////////////////////////////////////////////
//Write a program which accept number from user and return summation of all its non factors. 
//Input : 12 Output : 50 
//Input : 10 Output : 37
/////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int sum = 0;
    for(int i=1;i<=a;i++)
    {
        if(a % i != 0)
        {
            printf("%d ",i);
            
            sum = sum + i;
        }
    }

    printf("Total sum of its all non factors :  %d",sum);
}