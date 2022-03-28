infile=open('table2.dat','r')
lines=infile.readlines()
infile.close()
#print(lines)
first_line=lines[0]
data={}     # data={'A':{},'B':{},'C':{},'D:{},'E':{},}
properties=first_line.split()
#print(properties)
for p in properties:
    data[p]={}
#print(data)
for line in lines[1:]:
    word=line.split()
    #print(word)
    i = int(word[0])
    values=word[1:]
    for p,v in zip(properties,values):
        if v != 'no':
            data[p][i]=float(v)     # data['A'][1]=23.56
#print(data)

for p in data:
    values = data[p].values()
    data[p]['mean']=sum(values)/len(values)
#print(data)

for p in data:
    print("Mean value of property %s = %g "%(p,data[p]['mean']))






