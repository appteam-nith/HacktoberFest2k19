num = int(input("Enter any number: "))


def fact(n):
    if n >= 1:
        factorial = n * fact(n - 1)
        print(factorial)
        return factorial

    else:
        factorial = 1
        return factorial


print(f"The factorial of {num} is {fact(num)}")
