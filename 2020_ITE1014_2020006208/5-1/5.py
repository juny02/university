import random

def stringLength(): #치즈 길이 구하는것
    while True:
        print('Input the length of the string : ', end='')
        len=input()
        len=int(len)
        if 10<=len<=30:
            return len
        else:
            print('please enter number not less than 10 but not more than 30.')
            print()

def makeCheese(leng): #치즈 만들기
    a=[]
    k=0
    while k<leng:
        a.append(chr(random.randint(97,122)))
        k=k+1
    return ''.join(a)

def display(cheese,already,right): #화면에 보여주기
    print('Eaten alphabet of cheese : ', end='')
    for i in already:
        print(i, end='')
        print(' ', end='')
    print()
    print('Original cheese : ', end='')
    print(cheese)
    print('Current cheese status : ', end='')
    eatenC='_'*(len(cheese))
    currentC=cheese
    for i in range(len(cheese)):
        if cheese[i] in right:
            currentC=currentC[:i]+eatenC[i]+currentC[i+1:]
    for i in currentC:
        print(i, end='')

def choose(): #뭘먹을지 고르기
    while True:
        k=chr(random.randint(97,122))
        if k not in already:
            return k
    
cheese=makeCheese(stringLength()) 
print('Generated Cheese is '+"'"+cheese+"'")
print('Mouse starts eating!!')
right=''
already=''
t=0
while t<10:
    a=choose()
    if a in cheese:
        right=right+a
    already=already+a
    print('Start eating '+"'"+a+"'")
    display(cheese,already,right)
    print()
    print()
    t=t+1
print('Finally remained Cheese Status :')
display(cheese,already,right)

