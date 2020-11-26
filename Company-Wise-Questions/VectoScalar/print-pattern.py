# given an array like [4,2,3], print following pattern
# *
# * *
# ***
# ***

n = int(input())
arr = list(map(int,input().split()))[:n]

def printPattern(arr):
    rows = max(arr)
    cols = len(arr)
    mat = [[" " for i in range(cols)] for j in range(rows)]
    for i in range(0,cols):
        for j in range(rows-arr[i],rows):
            mat[j][i]="*"
    for i in range(0,rows):
        for j in range(0,cols):
            print(mat[i][j],end="")
        print("")
printPattern(arr)


    

