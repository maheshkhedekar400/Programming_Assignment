//////////////////////////////////////////////////////////////
//Write a program which accept number from user and print even factors of that number. 
//Input : 24 
//Output: 2 4 6 8 12
//////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    
    for(int i=1;i<=a;i++)
    {
        if(a % i == 0)
        {
           if(i % 2 == 0)
           { 
            printf("%d ",i);
           }
        }
    }
}