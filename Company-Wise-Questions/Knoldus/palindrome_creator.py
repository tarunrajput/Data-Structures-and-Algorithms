def palindromeCreator(str):
    n = len(str)
    if(str == str[::-1] and len(str)>2):
        return "palindrome"
    
    for i in range(0,n):
        oneL = str[0:i] + str[i+1:]
        if (oneL == oneL[::-1] and len(oneL)>2):
            return str[i]
    
    for i in range(0,n):
        oneL = str[0:i] + str[i+1:]
        for j in range(i,n):
            twoL = oneL[0:j] + oneL[j+1:]
            if (twoL == twoL[::-1] and len(twoL)>2):
                return str[i] + oneL[j]
    
    return "not possible"
