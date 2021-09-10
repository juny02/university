def addTotal(number):
    k=1
    sum=0
    while k <= number:
        sum=sum+k
        k=k+1
    return sum

def mulTotal(num):
    k=1
    global gMul
    gMul=1
    while k <= num:
        gMul=gMul*k
        k=k+1
   
    
a=input()
print('addTotal(): ', end='')
print(addTotal(int(a)))
print('gMul: ', end='')
mulTotal(int(a))
print(gMul)
