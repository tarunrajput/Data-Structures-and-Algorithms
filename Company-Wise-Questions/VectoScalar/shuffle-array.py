# randomize or shuffle an array or list

import random
arr = [1,2,3,4,5]
arrsize = len(arr)
for i in range(arrsize-1,0,-1):
    temp = random.randint(0,i+1)
    arr[i], arr[temp] = arr[temp], arr[i]

print(*arr)
