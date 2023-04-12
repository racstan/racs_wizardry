tup1= ('Physics','chemistry',1997,2000)
tup2="a","b","c","d",
tup3=(1,2,3,4,5)
print(tup1,tup2)

tup3=() #empty tuple and indexing start at 0 as well
print(tup1[0])# printing 1st value of tup1
print(tup1[1:5])


print((1,2)+(3,4))
print((1,2)*4)
t=(1,2,3,4)
print(t[0],t[1:3])

tmp=['bb','aa','cc','dd']
T=tuple(tmp)
print(T)
print(sorted(T))

T=(1,2,3,4,5)
L=[x+20 for x in T] # or l=[] for x in T: L.append(x+20)
print(L)

L=[]
for x in T:
    L.append(x+20)
print(L)

T=(1,2,3,2,4,2)
T.index(2) # first appearance of element 2
print(T.index(2,2)) # second appearance of element 2
print(T.count(2)) #counts number of 2s
print(T.index(4,2))


T=(1,[2,3],4) # nested tuples
print(T[1])
print(T[1][0])
T[1][0]='spam'
print(T)

bob=('Bob',40.5,['dev','mgr'])
print(bob[2][0])
print(bob[0],bob[2])

tup1=(12,34.56)
tup2=('abc','xyz')
tup3=tup1+tup2
print(tup3)
print(tup3[2])

tup=('physics','chemistry',1997,2000) # for deleting tup elements you need to remove the whole tuple
print(tup)
del tup
#print(tup)

print(len((1,2,3)))
print((1,2,3)+(4,5,6))
print(('Hi'*4))
print(3 in (1,2,3))
for x in (1,2,3):
    print(x)

L=('spam','Spam','SPAM!')
print(L[2])
print(L[-2])
print(L[1:])

tuple1,tuple2=(123,'xyz'),(456,'abc')
print(len(tuple1))
t1=(1,2,3,7,4)
print(max(t1))
print(min(t1))
