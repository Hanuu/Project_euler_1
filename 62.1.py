import time
import sys

def cube (a):
    return a**(1./3.)
    
    
def digit(a):
    d=0
    while(a>=1):
        a=a/10
        d+=1
        
    return d
    
start =time.time()

cube=[0,1]
temp=[0,1]
sortednumber=[0,1]

for i in range (2,10000):
    tempo=0
    cube.append(i**3)
    
    digits=[]
    for a in range(0,digit(i**3)):
        digits.append((i**3/10**a)%10)
        
    digits.sort()
    for a in range(0,digit(i**3)):
        tempo+=digits[a]*10**a
    temp.append(tempo)
    # print '%d %d %d %d' %(cube[i],i, temp[i],temp.count(temp[i]))
# for k in range(2,10000):
#     sortednumber.append(temp[k])
    
for j in range (0,10000):
    if(temp.count(temp[j])==5):
        print '%d %d %d %d' %(cube[j], j,temp[j],temp.count(temp[j]))

end=time.time()

print "The time spent is %f second" %(end-start)
#감기가 힘든 이유는 약기운때문인건가