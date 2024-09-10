word = input().strip()

length = len(word)
for i in range(0, length, 10):
    print(word[i:i+10])