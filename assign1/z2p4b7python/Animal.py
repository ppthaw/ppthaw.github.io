import random
class Animal:
    def __init__(self,name):
        self.name=name
    def eat(self,food):
        print('%s eats %s' %(self.name,food))
class Dog(Animal):
    def __init__(self,name):
        super(Dog,self).__init__(name)
        self.breed=random.choice(["GR","Terrier","BullDog"])
    def fetch(self,thing):
        print('%s is %s and fetch %s'%(self.name,self.breed,thing))
    def show_effection(self):
        print('%s wags tail' %(self.name))
class Cat(Animal):
    def play(self):
        print('%s play with GoteKyar'%(self.name))
    def show_effection(self):
        print('%s purrs' %(self.name))

a=Animal('AungNet')
a.eat('Chicken Rice')
d=Dog('GoteKyar')
d.eat('BBQ')
d.fetch('Ball')
c=Cat('MiWar')
c.eat('Fried Fish')
c.play()
#d.play()
d.show_effection()
c.show_effection()