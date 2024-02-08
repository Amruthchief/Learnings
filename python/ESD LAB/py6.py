
g=int(input("enter number"))
def fact(n):
   if n == 1:
       return n
   else:
       return n*fact(n-1)

a=fact(g)
print(a)