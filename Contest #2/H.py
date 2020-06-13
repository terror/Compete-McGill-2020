n = int(input())
d = {}

for i in range(n):
    s = input()
    if s in d:
        d[s] += 1
        print(s+str(d[s]))
    else:
        print('OK')
        d[s] = 0
