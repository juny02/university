list=input().split()
dic={}
for i in list:
    if i not in dic:
        dic[i]=1
    else:
        dic[i]=dic[i]+1
        
for i in dic:
    print()
    print(i,end='')
    print(': ', end='')
    print(dic[i])
            
