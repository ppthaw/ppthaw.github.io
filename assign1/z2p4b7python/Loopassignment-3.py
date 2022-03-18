rows=int(input(" Enter number of rows: "))
i=1
while i<=rows:
    j=i
    while j<rows:
        print(' ', end=' ')
        j += 1
    c=1
    while c<=i:
        print('*', end=' ')
        c += 1
    print()
    i += 1

i=rows
while i>=1:
    j=i
    while j<=rows:
        print(' ', end=' ')
        j += 1
    c=1
    while c<i:
        print('*', end=' ')
        c += 1
    print('')
    i -= 1
