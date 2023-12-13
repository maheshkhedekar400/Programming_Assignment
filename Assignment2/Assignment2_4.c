/////////////////////////////////////////////////////////////////
//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. 
//Input : E Output : TRUE 
//Input : d Output : FALSE
////////////////////////////////////////////////////////////////

#include<stdio.h>
void main()
{
    char a;
    printf("Enter any letter between a-z or A-Z : ");
    scanf("%c",&a);
    printf("Your letter is : %c\n",a);

    if(a == 'a' || a == 'e' || a =='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I' || a=='O' || a=='U')
    {
        printf("Given letter is vowel");
    }
    else
    {
        printf("Given letter is not vowel");
    }
}