#/////////////////////////////////////////////////////////
#// Accept on number from user if number is less than 10 then print “Hello” otherwise print “Demo”.
#////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    int a;
    printf("Enter your no.: ");
    scanf("%d",&a);
    printf("Your no. is = %d\n",a);

    if(a<=10)
    {
        printf("Hello : Your no. is less than 10");
    }
    else
    {
        printf("Demo : Your no. is greater than 10");
    }
}