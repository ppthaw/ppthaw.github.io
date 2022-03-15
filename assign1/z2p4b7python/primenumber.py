
print('Number from 10 to 19: ')
for num in range(10,20):
    for i in range(2,num): # 13=> 2,3,4,5,6,7,8,9,10,11,12
        if num%i==0:
            j=num/i
            print("%d equals %d * %d" %(num,i,j))
            break
    else:
        print(num, 'is prime')