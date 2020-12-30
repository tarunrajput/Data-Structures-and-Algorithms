str1 = input()
str2 = input()

def makeMap(s):
    charmap={}
    for char in s:
        if char not in charmap:
            charmap[char]=1
        else:
            charmap[char]+=1
    return charmap

def makeAnagram(str1,str2):
    map1=makeMap(str1)
    map2=makeMap(str2)
    count = 0
    for key in map1.keys():
        if key not in map2.keys():
            count+=map1[key]
        else:
            count+=max(0,map1[key]-map2[key])
    for key in map2.keys():
        if key not in map1.keys():
            count+=map2[key]
        else:
            count+=max(0,map2[key]-map1[key])
    return count
    
print(makeAnagram(str1,str2))




