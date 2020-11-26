def minChairs(simulations):
    for ele in simulations:
        total = 0
        available = 0
        for elem1 in ele:
            if elem1 == 'C':
                if available == 0:
                    total += 1
                else:
                    available-=1
            elif elem1 == 'R':
                available+=1
            elif elem1=='U':
                if available>0:
                    available-=1
                else:
                    total+=1
            else:
                available+=1
    return total

simulations = list(map(str,input().split()))
print(minChairs(simulations))
                
