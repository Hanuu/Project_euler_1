def digit(a):
    number=a
    out=0
    while(number>=1):
        number/=10
        out+=1
        
    return out
    
sumofdigitof=[0]
for a in range (1,100):
    for b in range(1,100):
        number=a**b
        dig=0
        for c in range(0,digit(number)):
            dig+=(number//10**c)%10
        sumofdigitof.append(dig)
        
sumofdigitof.sort()

print(sumofdigitof.pop())

# Life is short, you need a phyton