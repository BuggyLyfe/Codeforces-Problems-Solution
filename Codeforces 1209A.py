n = input()
n = int(n)
inp = input()
li = inp.split()
lis = [eval(i) for i in li]
lis.sort()
for i in range(n):
    if lis[i]!=-1:
        for x in range(i+1,n):
            if lis[x]!=-1 and lis[x]%lis[i]==0:
                lis[x]=-1
cnt = 0
for i in lis:
    if i!=-1:
        cnt+=1
print(cnt)
