# divide the test number with 2 to square root of number return False when % ==0
from math import sqrt

def is_prime(n):
    trial_factor=2
    root=sqrt(n)
    while trial_factor<=root:
        if n%trial_factor==0:
            return False
        trial_factor +=1
    return True

print(' 123457 is prime? ', is_prime(123457))
print(' 2567783 is prime? ', is_prime(2567783))

