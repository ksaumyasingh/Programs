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