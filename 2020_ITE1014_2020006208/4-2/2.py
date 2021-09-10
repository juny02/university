def printLine(n):
    for i in range(1, n+1):
        print(i, end='')
        print(' ', end='')
    print()
    
num=input()
num=int(num)    
for a in range(1,num+1):
    printLine(a)
for b in range(num,0,-1):
    printLine(b)
