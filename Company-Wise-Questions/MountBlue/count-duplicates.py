def countDuplicates(arr):
    return len(arr) - len(set(arr))

n = int(input())
arr = list(map(int,input().split()))[:n]
print(countDuplicates(arr))