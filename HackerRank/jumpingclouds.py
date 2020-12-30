n = int(input())
c = list(map(int, input().rstrip().split()))

i = 0
count = 0

while i < n-1:
    if i+2 < n and c[i+2] == 0:
        count += 1
        i += 2
    else:
        count += 1
        i += 1

print(count, end="")
