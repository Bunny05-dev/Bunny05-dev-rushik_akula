a = 5
b = 1

for i in range(a):
    print(" " * (a - i - 1), end="")
    print("*" * b)
    b += 2