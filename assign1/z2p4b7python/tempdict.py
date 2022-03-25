
temps={'Osolo':13,'London':14.7,'Paris':15.2}
print(type(temps))
print('Temperature of London : %s ' % temps['London'])
print('Temperature of Osolo : %s ' % temps['Osolo'])
print(temps.keys())
print(temps.values())
for key in temps:
    print(key,temps[key])

mydict=dict()
mydict['key1']='Yangon'
mydict['key2']='Mandalay'
print(mydict)

for city in sorted(temps):
    print(city,temps[city])


temps['Yangon']=35
print(temps)
temps['Osolo']=15
print(temps)
del temps['Yangon']
print(temps)
if 'London' in temps:
    print('London temperature is %s' %temps['London'])
else:
    print('London is not in temps!')

# pass by reference
t1=temps
t1['Mandalay']=36
print(temps)
print(t1)

t2=temps.copy() # pass by value
t2['Mogok']=24
print(t2)
print(temps)
