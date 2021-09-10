def star(g):
    c=0
    while c < g+1:
        print('*', end='')
        c=c+1

a=input()
b=0
while b < int(a):
    star(b)
    b=b+1
    print('')

