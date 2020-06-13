n = int(input())
arr = list(map(int, input().split()))

arr = sorted(arr)
print(min(arr[n - 2] - arr[0], arr[n-1] - arr[1]))
