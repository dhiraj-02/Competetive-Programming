//https://www.codechef.com/START76C/problems/MAKEARRAYODD


t = int(input())
for i in range(t):
    n , x = map(int,input().split())
    list1 = list(map(int,input().split()))
    e = 0
    for i in list1:
        if i % 2==0:
            e=e+1
    #print(e)
    
    if e==0 :
        print("0")
    
    
    
    elif e == n and x % 2 == 0 :
        print("-1")
    
    
    
    else:
        if x % 2!= 0 and e % 2== 0:
            print(int(e/2))
        elif x % 2!= 0 and e % 2== 1:
            print(int(e/2) + 1)
        elif x%2 == 0:
            print(e)