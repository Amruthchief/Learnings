from collections import Counter
def frequent(l):
    c=Counter(l)
    freq=list(c.values())
    maxfreq=max(freq)
    minfreq=min(freq)
    minfreqlist=[]
    maxfreqlist=[]

    for i in c:
        if c[i]==maxfreq:
            maxfreqlist.append(i)
        if c[i]==minfreq:
            minfreqlist.append(i)
    
    minfreqlist.sort()
    maxfreqlist.sort()

    return(minfreqlist,maxfreqlist)

f=[2,2,2,3,3,3, 4,4,4, 5,5,5,5,5,5,6,6,6 ]
t=[1,2,2,3,3,3,4,4,4,4]
test=frequent(f)

print(test)

    