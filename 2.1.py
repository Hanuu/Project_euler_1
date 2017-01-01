f1=1
f2=1
temp=0
s=0
while f1<4000000:
    temp=f1+f2
    f2=f1
    f1=temp
    if f1%2==0:
        s+=f1
        
print s