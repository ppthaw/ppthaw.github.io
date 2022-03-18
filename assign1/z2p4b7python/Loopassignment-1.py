values=[]
for i in range(20):
    j=float(input(" Enter {0} value: ".format(i+1)))
    values.append(j)

print('Sum:',sum(values))
print('Average:',sum(values)/len(values))
print('Minimum:',min(values))
print('Maximum:',max(values))