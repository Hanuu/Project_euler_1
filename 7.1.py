def prime (a):
    for i in range(3,a):
        if a%i ==0:
            return 0
    return a
            
order=2
a=3

while order < 10002:
    if prime(a)==a:
        order+=1
    a+=2
    
print( a-2)

