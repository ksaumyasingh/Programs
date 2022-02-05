class University:
    def __init__(self,uname,uid,rating):
        self.uname=uname
        self._uid=uid
        self.__rating=rating
    def _display1(self):
        print("                UNIVERSITY")
        print("University Name    :",self.uname)
        print("University Id      : ",self._uid)
        print("University Ranking : ",self.__rating)
        
class Department(University):
    def __init__(self,dname,deptId,branch,uname,uid,rating):
        University.__init__(self,uname,uid,rating)
        self.dname=dname
        self._deptId=deptId
        self.branch=branch
    def _display2(self):
        self._display1()
        print("                DEPARTMENT")
        print("Department Name    : ",self.dname)
        print("Department Id      : ",self._deptId)
        print("Branch Name        : ",self.branch)
        
class Subjects(Department):
    def __init__(self,subname,subcode,testpaper,dname,deptId,branch,uname,uid,rating):
        Department. __init__(self,dname,deptId,branch,uname,uid,rating)
        self.subname=subname
        self._subcode=subcode
        self.__testpaper=testpaper
    def _display3(self):
        self._display2()
        print("                SUBJECT")
        print("Subject            : ",self.subname)
        print("Subject Code       : ",self._subcode)
        print("Testpaper          : ",self.__testpaper)
        
class Students(Subjects):
    def __init__(self,sname,sid,phno,Class,subname,subcode,testpaper,dname,deptId,branch,uname,uid,rating):
        Subjects. __init__(self,subname,subcode,testpaper,dname,deptId,branch,uname,uid,rating)
        self.sname=sname
        self.sid=sid
        self.__phno=phno
        self.Class=Class 
    def _display4(self):
        self._display3()
        print("                STUDENT DETAILS")
        print("Name : ",self.sname)
        print("Student's Id       : ",self.sid)
        print("Mobile Number      : ",self.__phno)
        print("Class              : ",self.Class)
class Teachers(Subjects):
    def __init__(self,tname,tid,phno,Class,subname,subcode,testpaper,dname,deptId,branch,uname,uid,rating):
        Subjects. __init__(self,subname,subcode,testpaper,dname,deptId,branch,uname,uid,rating)
        self.tname=tname
        self.tid=tid
        self.__phno=phno
        self.Class=Class
    def _display4(self):
        self._display3()
        print("                TEACHER")
        print("Name               : ",self.tname)
        print("Teacher's Id       : ",self.tid)
        print("Mobile Number      : ",self.__phno)
        print("Class              : ",self.Class)
        

def heading(s):
    print("===============================================================================================")
    print("                                       ",s,"                                       ")
    print("===============================================================================================\n\n")


import os

clearConsole = lambda: os.system('cls' if os.name in ('nt', 'dos') else 'clear')

clearConsole()
heading("UNIVERSITY PORTAL")
uname=input("Enter University Name : ")
clearConsole()
heading("Welcome to "+uname)
print("1. Register as Teacher")
print("2. Register as Student")
choice=input("Enter Choice :")
if(choice=='1'):
    clearConsole()
    heading("Teacher's Registration Portal")
    name=input("Name            : ")
    phno=input("Mobile Number   : ")
    dname=input("Department Name : ")
    branch=input("Branch Name     : ")
    subname=input("Subject Name    : ")
else:
    clearConsole()
    heading("Student's Registration Portal")
    name=input("Name            : ")
    phno=input("Mobile Number   : ")
    dname=input("Department Name : ")
    branch=input("Branch Name     : ")
    subname=input("Subject Name    : ")
print("\n\n\n You registred successfully \n\n")
c=input("                                                           press any key to veiw details")
clearConsole()
heading("DETAILS")
if(choice=='1'):
    obj=Teachers(name,19246,phno,subname,12,301,1,dname,111,branch,uname,301,8.5)
else:
    obj=Students(name,19246,phno,subname,12,301,1,dname,111,branch,uname,301,8.5)
obj._display4()
'''
import mysql.connector  
  
#Create the connection object   
myconn = mysql.connector.connect(host = "localhost", user = "saumya",passwd = "8292")  
  
#printing the connection object   
print(myconn)  '''