def printStarDia(n):
    do=1
    while do<n+1:
        a=0
        b=0
        while a<n-do:
            print(' ', end='')
            a=a+1
        while b<do:
            print('* ', end='')
            b=b+1
        do=do+1
        print()

    do=0
    while do<n+1:
        a=0
        b=0
        while a<do:
            print(' ', end='')
            a=a+1
        while b<n-do:
            print('* ', end='')
            b=b+1
        do=do+1
        print()


num=input()
num=int(num)
printStarDia(num)
