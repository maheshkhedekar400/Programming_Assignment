#/////////////////////////////////////////////////////
#//Given a number N, check if a number is perfect or not. 
#//A number is said to be perfect if sum of all its factors excluding the number itself is equal to the number. 
#//Return 1 if the number is Perfect otherwise return 0.
#////////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

sum = 0
for i in range(1,a//2+1):
    if(a % i == 0):
        print(i)
        sum = sum + i

print("Total sum of factors : ",sum)

if(a == sum):
    print("Given no. is perfect. 1")
else:
    print("Given no. is not perfect. 0")
    