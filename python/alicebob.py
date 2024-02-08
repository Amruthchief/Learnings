def compareTriplets(a, b):
    alicescore =0
    bobscore = 0
    for i in range(len(a)):
        if a[i]>b[i] : alicescore += 1
        elif a[i]<b[i] : bobscore += 1
       
    return [alicescore,bobscore]


# compareTriplets([5,6,7],[3,6,10])
print(compareTriplets([5,6,7],[3,6,10]))