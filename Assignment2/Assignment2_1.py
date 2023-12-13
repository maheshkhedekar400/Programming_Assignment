#///////////////////////////////////////////
#// Write a program which accept one number from user and print that number of even numbers on screen. 
#Input : 7 
#Output: 2 4 6 8 10 12 14
#/////////////////////////////////////////

a = int(input("Enter the value of a :"))
print("a : ",a)

for i in range(2,(a*2+2),2):
    print(i)