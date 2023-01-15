test = input()
test = int(test)
while test > 0:
    inp = input()
    li = inp.split()
    lis = [eval(i) for i in li]
    k = lis.pop()
    print(lis[0],lis[1],k-lis[0]-lis[1])
    test-=1
