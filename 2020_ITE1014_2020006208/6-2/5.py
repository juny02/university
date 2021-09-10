a, b, c=input().split()
a=int(a)
b=int(b)
c=int(c)

if a<=b and a<=c:
    print('min:', end='')
    print(a)
elif b<=a and b<=c:
    print('min:', end='')
    print(b)
elif c<=a and c<=b:
    print('min:', end='')
    print(c)
    
if a>=b and a>=c:
    print('max:', end='')
    print(a)
elif b>=a and b>=c:
    print('max:', end='')
    print(b)
elif c>=a and c>=b:
    print('max:', end='')
    print(c)
        
