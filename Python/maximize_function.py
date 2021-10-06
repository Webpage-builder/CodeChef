t = int(input())
while t:
    n = int(input())
    arr = sorted(list(map(int, input().split())))
    max_sum = 0
    min1 = arr[0]
    max1 = arr[len(arr)-1]
    for i in range (1, len(arr)-1):
        total = abs(min1-arr[i]) + abs(arr[i]-max1) + abs(max1-min1)
        if total > max_sum:
            max_sum = total
    print(max_sum)
    t -= 1