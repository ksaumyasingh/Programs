''' bitwise >> or << and keyword variable-length ,non-keyword variable-length arguments. (arbitary arguments)'''
print("hello world!")
a=10
b=12.9
c=b-a
print(c,type(c))
#hello world!
#2.9000000000000004 <class 'float'>
print(type(type(c)))
#<class 'type'>
name="saumya"
last='singh'
name=name+last
print(name)
print(name+last)
'''saumyasingh(used for multiple line comment)
saumyasinghsingh'''
'''
del(name) #to delete variable
print(name)
#NameError: name 'name' is not defined
'''
d=input("enter a value")
print(d,type(d))
# enter a value7
# 7 <class 'str'>  (by default all value considered as str'string' data type)(so if we want any specific data type then typecast it)
e=None
print(e,type(e))
e="john"
print(e,type(e))
'''
None <class 'NoneType'>
john <class 'str'>
'''
###   LIST
#ordered , allow duplicate values,changable
list=[7,8,4,'john',"saumya",9.7,True]
for i in range(4):
    print(list[i])
print()
for i in range(4):
    print(list[i]),
print()
for i in range(6):
    print(list[i],end=" ")
print()
print(*list)
'''
7
8
4
john

7
8
4
john

7 8 4 john saumya 9.7
7 8 4 john saumya 9.7 True
'''
# negative index
print(list[-1],list[-2],list[-3])
for i in range(6,0,-1):
    print(list[i])
'''
True 9.7 saumya
True
9.7
saumya
john
4
8'''
print(list.count(True))
list.append(12)#last
print(*list)
list.insert(2,True)#at specific position
print(*list)
list.remove(True)#element
print(*list)
list.pop(5)#index's element
print(*list)
del list[4]#index's element
print(*list)
print()
list.extend('john')#the extend() method takes an iterable such as list, tuple, string etc.
'''
1
7 8 4 john saumya 9.7 True 12
7 8 True 4 john saumya 9.7 True 12
7 8 4 john saumya 9.7 True 12
7 8 4 john saumya True 12
7 8 4 john True 12
j o h n
'''
### TUPLES ###(similar to list(ordered) but unchangeble)round bracket used #negative index also
tuple=(4,8,4,'john',"saumya",9.7,True)
print(tuple[2])
#tuple[1]='sita'//typeError:-Tuple donesnot support aSSIGNMENT
print(*tuple)
#4 8 4 john saumya 9.7 True
print(tuple.count(4))#2
print(tuple.index(4))#0

### SET {} unordered, duplicate element not allowed

set={4,8,4,'john',"saumya",9.7,True}
print(*set)
set.add(2)#element added to set
print(*set)
set.pop()# randomly any ele could be poped so no use of it
print(*set)
set.remove(4)#element
print(*set)
set2=set.copy()#set copy
set.clear()#all ele deleted
print(*set)
print(*set2)
'''
True 4 john saumya 8 9.7
True 2 4 john saumya 8 9.7
2 4 john saumya 8 9.7
2 john saumya 8 9.7

2 john 8 saumya 9.7
'''

### SET {} key value pair , key-unique ,value-can be duplicate, changable

dict={19:"saumya","saumya":'singh','19246':'saumya'}

print(*dict) #only key printed
#print(dict[1])wroug cant access by index
print(dict[19]) #key -return its value
print(len(dict))
dict.get('19246')
print(*dict.items()) #whole dict printed
print(*dict.keys())   #only key printed
print(*dict.values()) #only value printed
dict.pop(19) #specific key value pair deleted
print(*dict.items())
dict.popitem() #last inserted key value pair deleted
print(*dict.items())
'''
19 saumya 19246
saumya
3
(19, 'saumya') ('saumya', 'singh') ('19246', 'saumya')
19 saumya 19246
saumya singh saumya
('saumya', 'singh') ('19246', 'saumya')
('saumya', 'singh')
'''
### STRING  ###
a="john"

# indexing 
for i in range(4): #positive used to print string straight
    print(a[i],end=" ")
print()
for i in range(3,-1,-1): #-ve indexing used to print string in reverse order
    print(a[i],end=" ")
print()   
# slicing -sub string called slice
for i in range(0,2): 
    print(a[i],end=" ")
print() 
# concatination
a="hello"
b='world'
print(a+b)
# repetition
print(3*a)
# membership (a perticular charater is present in string or not -return True or False)
print("p" in a)
print("h" in a)
'''
j o h n
n h o j
j o
helloworld
hellohellohello
False
True
'''
# string function

print(a.capitalize())#return string with first letter captalize and other small eg:HELLO->hello
print(a.endswith("o")) #true- if string ends with 'o' otherwise false
print(a.endswith('p'))
print(a.find('el')) #return position of string if found otherwise return -1
print(a.find('p'))
a="my name is saumya singh"
print(*a.split(" ")) #split string by specific separator, return list 
print(a.count('a')) #count repetition of string
print(a.replace("a","y")) #repalce str1 with str2
'''
Hello
True
False
1
-1
my name is saumya singh
3
my nyme is syumyy singh
'''
# Arithmetic operator
x=10
y=3
print(x/y)
print(x//y)
print(x%y)
print(x**y)
'''
3.3333333333333335
3
1
1000
'''
# i++ ++i i-- --i ->increment operator not present in python
# Assignment operators are there:  +=, -= etc
# logical operators : and or not 
if(x>y and x>9):
    print(x)
elif(x==y):
    print("equal")
else:
    print(y)
# membership operators : in , not in  -return True or False
list=[2,5,7]
print(5 in list)
print(5 not in list)
# bitwise operators: &,|,~(NOT),^(XOR),>>(right sift(1111->0011)),<<(left shift(1111->1100))
'''
10
True
False
'''
### LOOPS ###
# while
a=10
while a>0:
    print(a,end=" ")
    a-=2
print("end")
# for  used for traversing list,tuple,dictonary, set
list=["saumya",3,5.9]
for i in list:
    print(i,end=" ")
print()
# for with range function :returns a sequence of numbers, starting from 0 by default, and increments by 1 (by default), and ends at a specified number.
for i in range(10,0,-2):
    print(i,end=" ")
print()
for i in range(2,-1,-1):
    print(list[i],end=" ")
print()
'''
10 8 6 4 2 end
saumya 3 5.9
10 8 6 4 2
5.9 3 saumya
'''
### METHOD ###

def sum(a,b=10,c=5): #default argument
    return (a+b+c)
print(sum(3)) #positional argument
print(sum(3,4))#non default argument followed by default argument
print(sum(3,4,5))
print(sum(c=5,a=3,b=4)) #keyword argument
print(sum(c=5,a=3)) 
print(sum(3,c=5,b=4)) #positional argument followed by non-positional argument
'''
18
12
12
12
18
12
'''
def suml(*list): #arbitary positional argument
    result=0
    for i in list:
        result+=i
    return result
print(suml(1,2,3,4,5,6))
def sumd(**b): #arbitary keyword argument
    for i in b.items():
        print(i)
sumd(number=5,colors='blue',fruits="apple")
'''
21
('number', 5)
('colors', 'blue')
('fruits', 'apple')
'''
### Exception Handling ###
def sumlist(list)
    total=0
    try:
        for x in list:
            total+=x
        print(total)
        avg=total/num_values
        print("Average",avg)
    except ZeroDivisionError:
        print("Divide by zero")
    except:
        print("Some Error occured")
    except TypeError:
        print("wrong data type")
list=[100,200,300,400,500]
num_values=0
sumlist(list)
        
    
 Anusha@28
DT20229728465 
https://www.pgpf.org/the-fiscal-and-economic-challenge/fiscal-and-economic-impact
https://www.investopedia.com/articles/economics/11/successful-ways-government-reduces-debt.asp
https://www.investopedia.com/articles/economics/11/successful-ways-government-reduces-debt.asp