////////////////////////////////////////////////////////
//Given a string S, check if it is palindrome or not.
//////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("Enter any word : ");
    scanf("%s",&str);

    //char rev[10] = strrev(str);
    printf("%s",strrev(str));
    //printf("%s",str);

    //printf("%s",rev);

    if(strcmp(str,strrev(str))==0)
    {
        printf("Given string is palindrome");
    }
    else
    {
        printf("Given string is not palindrome");
    }
}