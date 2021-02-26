def loveletter(input1,input2):
    words = []
    temp=""
    for i in range(0,len(input1)):
        if(input1[i].isalpha()):
            temp += input1[i]
        else:
            words.append(temp)
            temp = ""
    if(temp!=""):
        words.append(temp)

    ans=0

    for word in words:
        temp=word
        for _ in range(0,input2):
            temp=temp[1:] + temp[0]
        if(temp==word):
            ans+=1
    return ans
