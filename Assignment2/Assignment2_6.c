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

    int arr[] = {};
    
        
    for(int i=1;i<=a;i++)
    {
        
        if(a % i == 0)
        {
            int b = 0;
            while(b<=a)
            {
            arr[b] = i;
            b++;
            }
        }
        
    }

    int c = sizeof(arr) / sizeof(arr[0]);
    printf("%d",c);
    for(int i=0;i<=c;i++)
    {
        printf("%d ",arr[i]);
    }
}