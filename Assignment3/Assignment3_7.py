#/////////////////////////////////////////////
#//Given a positive integer, N. Find the factorial of N.
#//N = 5
#//Output:
#//120
#//Explanation:
#//5*4*3*2*1 = 120
#//////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

fact = 1
for i in range(1,(a+1)):
    fact = fact * i

print(fact)