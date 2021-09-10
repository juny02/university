while True:
    a=input()
    a=ord(a)
    if 97<=a<=122 :
        print(chr(a-32))
    elif 65<=a<=90:
        print(chr(a+32))
    elif 48<=a<=57:
        print(chr(a))
    else:
        print('exit')
        break

