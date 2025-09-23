def add(num1,num2):
    return f"Sum Of {num1} and {num2} is {num1+num2}"

def sub(num1,num2):
    if num1 < num2:
        print("Given 1st Value Is Lower Than Second So Answer May Be Negetive, Do You Want To Contionue (Y or N) ?")
        a=input()
        if a=="Y" or "y" or "yes" or "YES" :
            return f"Subtraction Of {num1} and {num2} is {num1-num2}"

def mult(num1,num2):
    return f"Multiplication Of {num1} and {num2} is {num1*num2}"

def div(num1,num2):
    if num2==0:
        print("Divide With 0 isn't Allowed")
    else:
        return f"Divison Of {num1} and {num2} is {num1/num2}"