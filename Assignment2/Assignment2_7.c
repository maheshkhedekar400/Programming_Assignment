//////////////////////////////////////////////////////////////////////////
//Write a program which accept number from user and display all its non factors. 
//Input : 12 Output : 5 7 8 9 10 11 
//Input : 13 Output : 2 3 4 5 6 7 8 9 10 11 12 
//Input : 10 Output : 3 4 6 7 8 9
/////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    for(int i=1;i<=a;i++)
    {
        if(a % i != 0)
        {
            printf("%d ",i);
        }
    }
}