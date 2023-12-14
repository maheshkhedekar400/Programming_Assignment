#////////////////////////////////////////////////////////////////
#//Write a program which accept number from user and display its digits in reverse order. 
#//Input : 2395 
#//Output : 
#//5
#//9
#//3
#//2
#//Input : 1018 
#//Output : 
#//8
#//1
#//0
#//1
#//////////////////////////////////////////////////////////////////

a = int(input("Enter the value of a(minimum 4 digit) : "))

#r = 0
while(a > 0):
    r = a % 10
    print(r)
    a = a // 10
    