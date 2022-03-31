# (1) . Ask Student Information
# (2) . Save In File
# (3) . Show Student List
# (4) . Delete Student Information From List
# CRUD => Create => Read => Update => Delete
# RollNo , Name , Address , Email , Phone
import sys
import json
class Student:
    def __init__(self,rollNo,name,address,email,phone):
        self.rollNo=rollNo
        self.name=name
        self.address=address
        self.email=email
        self.phone=phone

def ask_student_info():
    rollNo=input('Enter RollNo:')
    name=input('Enter Name:')
    address=input('Enter address:')
    email=input('Enter email:')
    phone=input('Enter Phone:')
    student=Student(rollNo,name,address,email,phone)
    add_student(student.__dict__)

def add_student(student):
    # 1 open json file and read
    infile=open('studentlist.json','r')
    lines=infile.readlines()
    infile.close()
    # 2 convert string to json
    myjson=json.loads(lines[0])
    #print(type(myjson['studentlist']))
    #print(myjson) 
    # 3 add one student into studentlist list
    myjson['studentlist'].append(student) # add one student into studentlist List
    # 4 convert studentlist JSON to string and write to file
    file=open('studentlist.json','w')
    file.write(json.dumps(myjson)) # json (dictonary) to string
    file.close()

def show_student_list():
    file=open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    print('Roll No\t Name\t Address Email\t Phone')
    for student in myjson['studentlist']:
        print('%s\t%s\t%s\t%s\t%s' %(student['rollNo'],student['name'],student['address'],student['email'],student['phone']))
    
def delete_student(rollNo):
    file=open('studentlist.json','r')
    lines=file.readlines()
    file.close()
    myjson=json.loads(lines[0])
    index=0
    found=False
    for student in myjson['studentlist']:
        if(student['rollNo']==rollNo):
            found=True
            break
        else:
            index +=1
    #print(index,found)
    if (found):
        del myjson['studentlist'][index] # delete one student based on index and found status
        file=open('studentlist.json','w')
        file.write(json.dumps(myjson)) # json (dictonary) to string // updated deleted studentlist
        file.close()
        print('One student deleted!')
    else:
        print('Roll No not found!')

def main():
    print('Please choice:')
    print('1: Add New student')
    print('2: Show student list')
    print('3: Delete One student')
    print('4: Exit From Program')
    ans=int(input('Enter your choice:'))
    if ans==1:
        ask_student_info()
        show_student_list()
    elif ans==2:
        show_student_list()
    elif ans==3:
        rollNo=input('Enter Roll No:')
        delete_student(rollNo)
        show_student_list()
    else:
        print('Terminating From Program.....!')
        sys.exit(1)

main()

#delete_student('4')
#show_student_list()
#add_student()
#ask_student_info()
