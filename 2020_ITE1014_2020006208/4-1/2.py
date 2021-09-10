one=input()
two=input()
def add (a,b):
    return a+b
def sub (a,b):
    return a-b
def mul (a,b):
    return a*b
def div (a,b):
    return a/b
def mod (a,b):
    return a%b
def printMsg():
    print("completed")

o=int(one)
t=int(two)



print('sum: ', end='')
print(add(o,t))
print('difference: ', end='')
print(sub(o,t))
print('product: ', end='')
print(mul(o,t))
print('division: ', end='')
print(div(o,t))
print('remainder: ', end='')
print(mod(o,t))
printMsg()
