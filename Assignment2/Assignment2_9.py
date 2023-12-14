#////////////////////////////////////////////////////////
#//Write a program which accept number from user and return difference between summation of all its factors and non factors.
#//Input : 12 Output : -34 (16 - 50) 
#//Input : 10 Output : -29 (8 - 37)
#///////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

fact = 0
non_fact = 0


for i in range(1,a):
    if(a % i == 0):
        print("Factors :",i)
        fact = fact + i
    else:
        print("Non Factors : ",i)
        non_fact = non_fact + i  
        
print("Sum of Factors : ",fact)
print("Sum of Non_factors : ",non_fact)
print("Difference between factors and non-factors : ",fact - non_fact)
