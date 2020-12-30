n = int(input())

string = ""
result= ""
count=0

for i in range(n):
    string+=input()

prev = string[0]
stringLen = len(string)

for i in range(0,stringLen+1):
    if i < stringLen:
        if(string[i] == prev ):
            count =  count +1
        else:
            result+=prev+str(count)
            count = 1
            prev= string[i]
    else:
        result+=prev+str(count)

print(result,end="")



        

    


