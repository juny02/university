import random
def getRandomString(leng):
    a=[]
    k=0
    while k<leng:
        a.append(chr(random.randint(97,122)))
        k=k+1
    A=''.join(a)
    return A

length=input()
length=int(length)
print(getRandomString(length))
