
number=600851475143

for i in range(2,600851):
    if number%i==0:
        number/=i
        print i