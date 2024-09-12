def star(n):
    for i in range(n - 1):
        print(" ", end="")
    print("*")

    for i in range(2, n + 1):
        for j in range(n - i):
            print(" ", end="")
        print("*", end="")
        for k in range((i - 1) * 2 - 1):
            print(" ", end="")
        print("*")

n = int(input())
star(n)
