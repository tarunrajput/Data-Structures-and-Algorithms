def minheight(input1, input2, input3):
    return getHeight(input1, input2, 0, input3-1, 0, input3)


def search(arr, start, end, value):
    for i in range(start, end + 1):
        if arr[i] == value:
            return i
    return -1


def getHeight(inOrder, levelOrder, start, end, height, n):
    if start > end:
        return 0

    getIndex = search(inOrder, start, end, levelOrder[0])

    if getIndex == -1:
        return 0
    leftCount = getIndex - start
    rightCount = end - getIndex
    newLeftLevel = [None for _ in range(leftCount)]
    newRightLevel = [None for _ in range(rightCount)]

    lheight, rheight, k = 0, 0, 0
    for i in range(n):
        for j in range(start, getIndex):
            if levelOrder[i] == inOrder[j]:
                newLeftLevel[k] = levelOrder[i]
                k += 1
                break

    k = 0
    for i in range(n):
        for j in range(getIndex + 1, end + 1):
            if levelOrder[i] == inOrder[j]:
                newRightLevel[k] = levelOrder[i]
                k += 1
                break
    if leftCount > 0:
        lheight = getHeight(inOrder, newLeftLevel, start,
                            getIndex - 1, height, leftCount)
    if rightCount > 0:
        rheight = getHeight(inOrder, newRightLevel,
                            getIndex + 1, end, height, rightCount)

    height = max(lheight + 1, rheight + 1)
    return height


print(minheight([4, 2, 5, 1, 6, 3, 7], [1, 2, 3, 4, 5, 6, 7], 7))
