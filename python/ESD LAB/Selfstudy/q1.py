
l=[1,2,3,5,7,11,13,17,19,23,29]

def sump(l):
    sum=0
    for i in range(0,len(l)):
        sum+=l[i]
    print("SUM=",sum)

sump(l)