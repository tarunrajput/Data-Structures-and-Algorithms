n = int(input())

def fibonacciTriangle(n):
    for row in range(1,n+1):
        x=0
        y=1
        z=0
        for _ in range(1,row+1):
            z=x+y
            print(z,end=" ")
            x=y
            y=z
        print("")

fibonacciTriangle(n)