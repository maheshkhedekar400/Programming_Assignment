
#include <stdio.h>
#include <stdbool.h>

int main() {
    // Write C code here
    int no = 13;
    // if no is divisible by 1 and itself it's called as prime no
    // i = 2
    bool isPrime = true;
    for(int i=2;i<=no/2;i++)
    {
        if(no % i == 0) // 12 % 2
        {
            isPrime = false;
            break;
        }
    }
    if(isPrime == false)
    {
        printf("\nno is not prime");
    }
    else
    {
        printf("\nno is prime");
    }
    return 0;
}