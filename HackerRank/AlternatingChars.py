n = int(input())

def makeAlternateChars(str):
    count = 0
    for char in range(0, len(str)-1):
        if(str[char] == str[char+1]):
            count += 1
    return count


for i in range(n):
    s = input()
    result = makeAlternateChars(s)
    print(result)
