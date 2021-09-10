import random
a=0
list=[]
while a<100:
    list.append(random.randint(1,1000))
    a=a+1
for i in list:
    print(i, end='')
    print(' ', end='')    
print()
print()

print('max value: ', end='')
max=0
for i in list:
    if i>=max:
        max=i
print(max)
