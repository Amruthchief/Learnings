def accordian(l):
    flag=1
    diff=[]
    
    for i in range(0,len(l)-1):
        abs_diff=abs(l[i+1]-l[i])
        diff.append(abs_diff)
    print (diff)
    for i in range (0,len(diff)-1):
        if(i%2==0):
            if(diff[i] < diff[i+1]):
                flag=0
                break
        else:
            if (diff[i]>diff[i+1]):
                flag=0
                break
    if(flag):
        print("True")
    else:
        print("False")

L=[5,15,21,24,28,29]
accordian(L)

