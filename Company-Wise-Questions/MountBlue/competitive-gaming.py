# given an array of scores and following conditions, output how many players can qualify
# no players with score 0 can have a rank 
# input k, the cut off rank required to qualify
# input scores arr 
# sample test case: scores=[100,90,90,80], k=2
#ouput = 3
#explanation - ranks wil be [1,2,2,4], so only first 3 can qualify

def numPlayers(k, scores):
    scores=list(filter((0).__ne__, scores))
    print(*scores,sep=",")
    scores.sort(reverse=True)
    res = 0
    ranks=[]
    setOfScores=list(dict.fromkeys(scores))
    frequency=[]
    c=1
    for i in range(0,len(setOfScores)):
        frequency.append(scores.count(setOfScores[i]))
    for f in frequency:
        for i in range(0,f):
            ranks.append(c)
        c+=f

    for rank in ranks:
        if rank <= k:
            res+=1
    return res
scores=[0,0,0]
print(numPlayers(4,scores))