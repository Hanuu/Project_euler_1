def prime (a):
    for i in range(2,a):
        if a%i ==0:
            return 0
    return a
            

error=10
numberofprime=8
numberofdiagonal=13
n=3

while error>1/10:
    count =0
    if prime(4*n**2-2*n+1) !=0:
        count+=1
    if prime(4*n**2+1) !=0:
        count+=1
    if prime(4*n**2+2*n+1) !=0:
        count+=1

    numberofdiagonal+=4
    numberofprime+=count
    
    error=numberofdiagonal/numberofprime
    n+=1

print(n)