print("Hello World!")
age=34
distance=100.5
print(age)
print(distance)
print(type(age),type(distance))
length=12
width=20
area=length*width
print("Are is :",area)

str="Hello World!"
print(str)
print(str[0:])
print(str[0:-1])
print(str[0:5])
print(str[6:])
print(str[6:-1])
print(str*3)
print(str + " Zero to Pro ")

list=['abcd',786,2.23,'John']
tinylist=[123,'John']
print(list)
print(list[2])
print(list[0:3])
print(list[3:])
print(list[0:-1])
print(list + tinylist)
print(tinylist*2)

tinylist[0] =456
print(tinylist)
tuple=('abcd',78,'Gorge',24.5)
print(tuple)
print(tuple[0:-2])
print(tuple[0])

dict={ "name":"Mg Mg","age":23,"City":"Yangon" }
dict[ "Phone"]= "09123456789"
dict[2]="Something"
print(dict)
print(dict['City'])
print(dict['Phone'])
print(dict[2])
print(dict.keys())
print(dict.values())
dict['hobbies']={1:'PHP',2:'Python',3:'JS'}
print(dict)
print(dict['hobbies'])