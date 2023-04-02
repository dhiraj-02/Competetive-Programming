t = int(input())
list1 = list(map(int,input().split()))
S = []
count=1
flag=0
for i in range(1,t):
        if list1[i]>list1[i-1]:
            count+=1
        else:
            S.append(count)
            count=1
            flag=1
#print(count)
S.append(count)
if count==t:
    print(t)
else:
    print(max(S))
    