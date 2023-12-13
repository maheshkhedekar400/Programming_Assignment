#/////////////////////////////////////////////////////////////////////////////////
#//Write a program which accept number from user and display its multiplication of factors. 
#//Input : 12 Output : 144 (1 * 2 * 3 * 4 * 6) 
#//Input : 13 Output : 1 (1) 
#//Input : 10 Output : 10 (1 * 2 * 5)
#////////////////////////////////////////////////////////////////////////////////

a = int(input("Enter the value of a :"))
    
sum = 1
for i in range(1,(a+1)):
    if(a % i == 0):
        print(i)
        sum = sum * i
        
print("Total multiplication of all factors is : ",sum)
