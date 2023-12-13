#////////////////////////////////////////////////////////
#//Write a program which accept number from user and return difference between summation of all its factors and non factors.
#//Input : 12 Output : -34 (16 - 50) 
#//Input : 10 Output : -29 (8 - 37)
#///////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

fact = 0
non_fact = 0

print("Factors :")
for i in range(1,(a+1)):
    if(a % i == 0):
        print(i)
        fact = fact + i
        
print("Non Factors : ")
for i in range(1,(a+1)):
    if(a % i != 0):
        print(i)
        non_fact = non_fact + i

print("Sum of fact : ",fact)
print("Sum of non_fact : ",non_fact)
print("Difference between factors and non-factors : ",fact - non_fact)
