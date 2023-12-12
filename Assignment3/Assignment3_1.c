///////////////////////////////////////////////
//Sum of all prime numbers between 1 and N.
//////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a : ");
    scanf("%d",&a);

    int sum = 0;
    for(int i=2;i<=a;i++)
    {
        for(int j=1;j<i;j++)
        {
            if(i % j == 0)
            {
                printf("%d ",i);
                sum = sum + i;
            }
        }
    }

    printf("\n");
    printf("Sum of all prime no. is : %d",sum);
}