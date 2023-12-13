#/////////////////////////////////////////////////////////
#//Accept one character from user and convert case of that character. Input : a Output : A 
#//Input : D Output : d
#///////////////////////////////////////////////////////////////////////////////

a = input("Enter any letter between a-z or A-Z : ")
print("Your letter is : ",a)

b = ord(a)
print("Integer value is : ",b)

if(b>=65 and b<=90):
        c = chr(b+32)
        print("Your change letter is : ",c)
    
elif(b>=97 and b<=122):
    d = chr(b-32)
    print("Your change letter is : ",d)
    