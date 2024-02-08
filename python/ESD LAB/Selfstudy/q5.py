def binary(n):
    ans=[]
    for i in range(0,len(n)):
        binary=str(n[i])
        decimal=int(binary,2)
        if decimal %5==0:
            ans.append(binary)
    print ("input : ",n)
    print ("Answer: ",ans)
       
z=[111,10101,1010,101]
binary(z)
