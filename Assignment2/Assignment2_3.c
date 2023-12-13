 /////////////////////////////////////////////////////////
//Accept one character from user and convert case of that character. Input : a Output : A 
//Input : D Output : d
///////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    char a;
    printf("Enter any letter between a-z or A-Z : ");
    scanf("%c",&a);
    printf("Your letter is : %c\n",a);

    int b = (int)a;
    printf("Integer value is : %d\n",b);

    if(b>=65 && b<=90)
    {
        char c = (char)b+32;
        printf("Your change letter is : %c\n",c);
    }
    else if(b>=97 && b<=122)
    {
        char d = (char)(b-32);
        printf("Your change letter is : %c\n",d);
    }
}