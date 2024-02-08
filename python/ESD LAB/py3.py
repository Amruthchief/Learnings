#x,y=raw_input("Enter the numbers").split()

x=45
y=25
def gcd(x,y):
    if x > y: 
        small = y 
    else: 
        small = x 
    for i in range(1, small+1): 
        if((x % i == 0) and (y % i == 0)): 
            gcd = i 
              
    return gcd 
  
print(gcd(x,y))