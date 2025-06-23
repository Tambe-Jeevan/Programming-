print("TWO NUMBERS ADIITION, SUBSTRACTION, MULTIPLICATION, DIVISSION")
x=int(input("Enter First number:"))
y=int(input("Enter Second number:"))

#Addition
a=x+y
print("Adiition is:",a)

#Substraction
if x>y:
    s=x-y
    print("Substrction is:",s)
else:
    s=y-x
    print("Substractin is:",s)

#Multiplication
m=x*y
print("Multiplication is:",m)

#Division
if x>y:
    d=x/y
    print("Division is:",d)
else:
    d=y/x
    print("Division is:",d)
