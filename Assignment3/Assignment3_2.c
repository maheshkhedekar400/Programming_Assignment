/////////////////////////////////////////////////////
//Given a number N, check if a number is perfect or not. 
//A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number. 
//Return 1 if the number is Perfect otherwise return 0.
////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);

    int sum = 0;
    for(int i=1;i<a;i++)
    {
        if(a % i == 0)
        {
            printf("%d \n",i);
            sum = sum + i;
        }
    }

    printf("Total sum of factors : %d",sum);

    printf("\n");
    if(a == sum)
    {
        printf("Given no. is perfect. 1");
    }
    else
    {
        printf("Given no. is not perfect. 0");
    }
}