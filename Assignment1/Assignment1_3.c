/////////////////////////////////////////////////////////
// Write a programe in C to print 5 to 1 numbers on screen
////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    for(int i=5;i>0;i--)
    {
        printf("%d\n",i);
    }
    printf(".....................................\n");
    for(int i=5;i>0;i--)
    {
        printf("%d",i);
    }
}