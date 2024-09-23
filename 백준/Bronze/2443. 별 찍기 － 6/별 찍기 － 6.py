n = int(input())
for i in range(n):
    star = 2 * (n - i) - 1
    s = i
    print(' ' * s + '*' * star)
