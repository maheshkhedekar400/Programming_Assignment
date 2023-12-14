#//////////////////////////////////////////////////
#//Given two positive numbers X and Y, check if Y is a power of X or not.
#//Output:
#//1
#//Explanation:
#//2^3 is equal to 8.
#///////////////////////////////////////////////

a = int(input("Enter the value of a : "))
b = int(input("Enter the value of b : "))

if(a*a*a == b):
    print(1)
else:
    print(0)

