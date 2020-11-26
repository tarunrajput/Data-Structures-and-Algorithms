m,x,n = map(int,input().split())
arr = list(map(int,input().strip().split()))[:m]
l= []

def findElement(arr):
    for i in range(0,m):
        if arr[i] not in l:
            if (arr.count(arr[i])==x):
                l.append(arr[i])
    if(not l or len(l)<n):
        return "Sorry"
    else:
        return l[n-1]
print(findElement(arr))


