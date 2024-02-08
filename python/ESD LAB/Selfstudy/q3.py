
lower=2000
upper=3200

div=5
mul=7

num=[]
for i in range(lower,upper+1):
    if((i%7)==0 and  (i%5)!=0):
        num.append(i)
print (num)