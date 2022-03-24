
import sys
try:
    #print(sys.argv[0])
    C=float(sys.argv[1])
except IndexError:
    print("You forget to provide an argument after file name")    
    sys.exit(1)
except ValueError: 
    print("C value must be floating point or number, not string or character")   
    sys.exit(1)
F=(9/5)*C +32
print('%s C is %s F' %(C,F))