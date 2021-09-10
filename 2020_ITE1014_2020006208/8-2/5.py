def cc(a, b):
    if b==0:
        return 1
    elif a==b:
        return 1
    else:
        return cc(a-1, b-1)+cc(a-1, b)

x, y = input().split()
x=int(x)
y=int(y)
print(cc(x,y))
