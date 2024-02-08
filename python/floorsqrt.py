import math

def floorSqrt(x,start=1): 
    if x == 0 or x == 1:
        return x

    if start * start == x:
        return start
    elif start * start < x:
        return floorSqrt(x, start + 1)
    else:
        return start - 1

    return result


print(floorSqrt(2,1))
