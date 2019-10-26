n = int(input("->"))
given_array = []

for i in range(n):
    num = int(input("->"))
    given_array.append(num)
    print(given_array)


def sum_array(given_array):
    total = 0
    for q in given_array:
        total += q

    return total


print(f"The sum of given array is {sum_array(given_array)}\n")
print(sum(given_array))
