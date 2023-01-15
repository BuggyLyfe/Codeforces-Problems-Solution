test = int(input())
while test > 0 :
    inp = input()
    li = inp.split()
    lis = [eval(i) for i in li]
    lis.sort()
    if ((lis[0] + lis[1]) == lis[2]) or (lis[0] == lis[1] and lis[2] % 2 == 0) or (lis[2] == lis[1] and lis[0] % 2 == 0) :
        print("YES")
    else:
        print("NO")
    test-=1
