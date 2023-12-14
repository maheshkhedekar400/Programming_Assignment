///////////////////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and display its factors in decreasing order. 
//Input : 12 Output : 6 4 3 2 1
//Input : 13 Output : 1 
//Input : 10 Output : 5 2 1
/////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    for(int i=a-1;i>=1;i--)
    {
        
        if(a % i == 0)
        {
            printf("%d ",i);
        }
        
    }
}