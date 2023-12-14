////////////////////////////////////////
//Given an array Arr of size N, print second largest distinct element from an array.
//N = 6
//Arr[] = {12, 35, 1, 10, 34, 1}
//Output: 34
//Explanation: The largest element of the array is 35 and the second largest elementis 34.
//////////////////////////////////////

#include<stdio.h>
void main()
{
    int N;
    printf("Enter the length of array : ");
    scanf("%d",&N);

    int A[N];

    for(int i=0;i<N;i++)
    {
        printf("Enter the value of array : ");
        scanf("%d",&A[i]);
    }

    for(int i=0;i<N;i++)
    {
        printf("%d ",A[i]);
    }

    int max = 0;
    for(int i=0;i<N;i++)
    if(max <= A[i] )
    {
        max = A[i];
    }
    printf("\n");
    printf("Max no. is : %d\n",max);
}