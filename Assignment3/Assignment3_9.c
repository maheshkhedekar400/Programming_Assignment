/////////////////////////////////////////////////
//Given an array A of size N of integers. Your task is to find the minimum and maximum elements in the array.
//Input:
//N = 6
//A[] = {3, 2, 1, 56, 10000, 167}
//Output: 1 10000
//Explanation: minimum and maximum elements of array are 1 and 10000.
////////////////////////////////////////////////////////////

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

    int min = A[0];
    for(int i=0;i<N;i++)
    if(min >= A[i] )
    {
        min = A[i];
    }
    printf("\n");
    printf("Max no. is : %d\n",max);
    printf("Min no. is : %d\n",min);
}