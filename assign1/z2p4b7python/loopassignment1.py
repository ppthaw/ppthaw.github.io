count=sum=0
avg=0
min=0
max=0
while count<20:
    num=float(input('Enter Number: '))
    if num<0:
        print('Negative Number,Terminating.....!')
        break
    count += 1
    sum += num
else:
    print('Sum:', sum)
    print('Average:', sum/count)