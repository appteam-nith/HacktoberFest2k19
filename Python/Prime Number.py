x = int(input("enter a number :  "))
if x>1 :
    for i in (2,x) :
        if x%i == 0 :
            print("it is not prime number")
            break
        else:
            print("it is prime")
            break
else:
    print("It is prime")