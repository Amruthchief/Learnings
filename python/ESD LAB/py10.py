def intreverse(n):

    rev=0

    while ( n > 0 ):

        last = n % 10

        rev = rev * 10 + last

        n = n / 10

    print(rev)


intreverse(369)
