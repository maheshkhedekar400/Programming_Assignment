#/////////////////////////////////////////////////////////////////
#//Accept on character from user and check whether that character is vowel (a,e,i,o,u) or not. 
#//Input : E Output : TRUE 
#//Input : d Output : FALSE
#////////////////////////////////////////////////////////////////

a = input("Enter any letter between a-z or A-Z : ")
    
print("Your letter is : ",a)

if(a == 'a' or a == 'e' or a =='i' or a=='o' or a=='u' or a=='A' or a=='E' or a=='I' or a=='O' or a=='U'):
        print("Given letter is vowel")
else:
        print("Given letter is not vowel")
    
