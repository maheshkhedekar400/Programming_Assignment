#///////////////////////////////////////////////////////////////////////////////////////
#//Write a program which accept number from user and display its factors in decreasing order. 
#//Input : 12 Output : 6 4 3 2 1
#//Input : 13 Output : 1 
#//Input : 10 Output : 5 2 1
#/////////////////////////////////////////////////////////////////////////////////

a = int(input("Enter the value of a : "))

#for i in range(a,1):
#   if(a % i == 0):
#        print(i)

i = (a - 1)
while(i >= 1):
    if(a % i == 0):
        print(i)
    i = i-1