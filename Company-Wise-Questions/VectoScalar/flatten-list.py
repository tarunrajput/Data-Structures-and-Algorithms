nestedList = [1,2,[3],[4],[5,6]]
flattenedList=[]

for i in range(0,len(nestedList)):
    if(type(nestedList[i]) is list ):
        for j in range(0,len(nestedList[i])):
            flattenedList.append(nestedList[i][j])
    else:
        flattenedList.append(nestedList[i])
print(*flattenedList)
