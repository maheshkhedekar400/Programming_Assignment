/////////////////////////////////////////////////////////////////
//Given two strings a and b consisting of lowercase characters. 
//The task is to check whether two given strings are an anagram of each other or not. 
//An anagram of a string is another string that contains the same characters, only the order of characters can be different. 
//For example, act and tac are an anagram of each other.
//////////////////////////////////////////////////////////////

#include<stdio.h>
#include<string.h>
void main()
{
    char str[10];
    printf("Enter any word : ");
    scanf("%s",&str);

    char str1[10];
    printf("Enter any word : ");
    scanf("%s",&str1);

    printf("%s ",str);
    printf("%s ",str1);
    printf("%d ",strlen(str));

    for(int i=0;i<=strlen(str);i++)
    {
        for(int j=0;j<=strlen(str1);j++)
        {
            if(strcmp(str[i],str1[j])==0)
            {
                printf("%c %c",str[i],str1[j]);
            }
        }
    }
}