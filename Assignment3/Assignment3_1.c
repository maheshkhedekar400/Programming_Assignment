///////////////////////////////////////////////
//Sum of all prime numbers between 1 and N.
//////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int sum = 0;
    for(int i=2;i<=a;i++)
    {
        bool isprime = true;
        for(int j=2;j<(i/2)+1;j++)
        {
            if(i % j == 0)
            {
                isprime = false;
                printf("%d ",i);
            }
        }

        if(isprime)
        {
            sum = sum + i;
        }
    }

    printf("\n");
    printf("Sum of all prime no. is : %d",sum);
}