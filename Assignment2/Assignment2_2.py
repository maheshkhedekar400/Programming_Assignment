#//////////////////////////////////////////////////////////////
#//Write a program which accept number from user and print even factors of that number. 
#//Input : 24 
#//Output: 2 4 6 8 12
#//////////////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

for i in range(1,a):
    if(a % i == 0):
        if(i % 2 == 0):
            print(i)