#//////////////////////////////////////////////////////////////////
#//Write a program which accept number from user and return summation of all its non factors. 
#//Input : 12 Output : 50 
#//Input : 10 Output : 37
#///////////////////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

sum = 0
for i in range(1,(a+1)):
    if(a % i != 0):
        print(i)
        sum = sum + i

print("Total sum of all non factors : ",sum)