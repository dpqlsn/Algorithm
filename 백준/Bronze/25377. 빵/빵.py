def t(n, s):
    m = float('inf')
    
    for a, b in s:
        if a <= b:
            m = min(m, a)
    
    return m if m != float('inf') else -1

n = int(input())
s = [tuple(map(int, input().split())) for _ in range(n)]

result = t(n, s)
print(result)