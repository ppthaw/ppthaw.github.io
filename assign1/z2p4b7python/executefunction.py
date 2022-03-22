
# ask user a function and run with x value
from signal import default_int_handler


formula=input('Enter a function including x: ')
code="""def f(X):
    return %s
"""% formula
exec(code)
x=int(input('Enter value of x: '))
print(f(x))  