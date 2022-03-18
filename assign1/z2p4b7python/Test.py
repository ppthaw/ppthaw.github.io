num=[]
sum=0
average=0
maximum=0
minimum=0 
while True:
    numbers=float(input(' Enter a positive number: '))
    if numbers<0:
        break 
    sum += numbers
    num.append(numbers)

if len(num)>0:
    average = sum / len(num)
    maximum = max(num)
    minimum = min(num)

print(' Sum is: ',sum)
print(' Average is: ',average)
print(' Maximum is: ',maximum)
print(' Minimum is: ',minimum)