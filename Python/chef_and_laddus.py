t = int(input())
while t:
    n, k = map(int, input().split())
    size = sorted(list(map(int, input().split())))
    if k == 1:
        print(0)
        t -= 1
        continue
    if k >= 2:
        small = max(size)
        for i in range(n-k+1):
            if size[i+k-1] - size[i] < small:
                small = size[i+k-1] - size[i]
        print(small)
    t -= 1