def recursive (a):
    if a==1:
        return 1
    else:
        return a+recursive(a-1)

x=int(input())
print(recursive(x))
