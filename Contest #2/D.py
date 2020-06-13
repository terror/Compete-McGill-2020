n, k = list(map(int, input().split()))
arr = list(map(int, input().split()))

arr = sorted(arr)
ans = 0

if k == 0:
    ans = arr[0]-1
else:
    ans = arr[k-1]

c = 0

for i in range(n):
    if arr[i] <= ans:
        c += 1

if ans < 1 or c != k:
    print(-1)
else:
    print(ans)
