
nterms = int(input("How many terms? "))

# first two terms
n1, n2 = 0, 1
count = 0

while count < nterms:
    print(n1)
    nth = n1 + n2
    # update values
    n1 = n2
    n2 = nth
    count += 1