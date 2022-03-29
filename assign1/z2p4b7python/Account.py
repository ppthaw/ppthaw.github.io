
class Account:
    def __init__(self,name,account_number,initial_amount):
        self.name=name
        self.no=account_number
        self.balance=initial_amount
    def deposit(self,amount):
        self.balance +=amount
    def withdraw(self,amount):
        self.balance -=amount
    def dump(self):
        print('%s, %s balance : %s '%(self.name,self.no,self.balance))

a1=Account('Ma Ma','0123456',20000)

a1.balance=300000
a1.no='234567'

#print(a1.___dict___)
a1.dump()
a1.deposit(50000)
a1.dump()
a1.withdraw(69000)
a1.dump()