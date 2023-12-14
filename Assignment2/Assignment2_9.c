////////////////////////////////////////////////////////
//Write a program which accept number from user and return difference between summation of all its factors and non factors.
//Input : 12 Output : -34 (16 - 50) 
//Input : 10 Output : -29 (8 - 37)
///////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter the value of a :");
    scanf("%d",&a);

    int fact = 0;
    int non_fact = 0;

    for(int i=1;i<a;i++)
    {
        if(a % i == 0)
        {
            printf("Factor : %d\n",i);
            fact = fact + i;
        }
        else
        {
            printf("Non_Factor : %d\n",i);
            non_fact = non_fact + i;
        }
    }
    printf("\n");
    printf("Sum of Factor : %d\n",fact);
    printf("Sum of Non_Factor : %d",non_fact);
    printf("\n");
    printf("Difference between factors and non-factors : %d",fact - non_fact);
}