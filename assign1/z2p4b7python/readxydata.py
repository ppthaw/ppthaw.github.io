pairs=[]
infile=open('xy.dat','r')
for line in infile:
    words=line.split() #split data pairs
    for word in words:
        word=word[1:-1] #remove '(' ')'
        x,y=word.split(',') #split by ',' to get x,y value
        pair=(float(x),float(y)) #prepare x,y data to tuple type
        pairs.append(pair)
print(pairs)