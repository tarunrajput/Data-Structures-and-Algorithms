string = input()
n = int(input())

stringLength = len(string)
x=n//stringLength
r=n%stringLength
a=0

for i in range(0,stringLength):
    if (string[i]=='a'):
        a+=1
        
a=a*x

for i in range(0,r):
    if(string[i]=='a'):
        a+=1

print(a,end="")



