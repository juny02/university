def star(g):
    for j in range (1,g+1):
        c=0
        if c<g+1:
            c=c+1
            print('*', end='')
            
            
a=input()
for i in range(1, int(a)+1):
    star(i)
    print('')
