import math

def digit(a):
    number=a
    out=0
    while(number>=1):
        number/=10
        out+=1
        
    return out

def prime (a):
    for i in range(2,int(math.sqrt(a)+1)):
        if a%i ==0:
            return 0
    return a

def concatenatedprime(array):
    for i in range(0,4):
        for j in range(i,5):
            if prime(array[i]*10**digit(array[j])+array[i])==0:
                return 0
            if prime(array[j]*10**digit(array[i])+array[j])==0:
                return 0
    print (array[0]+array[1]+array[2]+array[3]+array[4])
    return 1
        
    
ListofPrime=[2,3,5,7,11]

for i in range(13,10000):
    b=prime(i)
    if b!=0:
        ListofPrime.append(b)

# print (ListofPrime.index(9973))
# print ("Start")

for aa in range(1000,1260):
    for bb in range(800,900):
        for cc in range(700,800):
            for dd in range(700,800):
                for ee in range(1,6):
                    array=[ListofPrime[aa],ListofPrime[bb],ListofPrime[cc],ListofPrime[dd],ListofPrime[ee]]
                    concatenatedprime(array)
                    print (ListofPrime[aa],ListofPrime[bb],ListofPrime[cc],ListofPrime[dd],ListofPrime[ee])
