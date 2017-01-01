def digit(number):
    out=0
    while number>=1:
        out+=1
        number/=10
    print (out)
    return out



for i in range(999,100):
    for j in range (999,100):
        number=i*j
        for k in range (1,digit(number)/2+1):
            if((number/10**k)%10 != (number/10**(digit+1-k))%10):
                k=digit(number)/2+1
            if(k==digit(number)/2):
                print number