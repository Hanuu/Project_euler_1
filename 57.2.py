
# for i in range(1,1001):
#     denominator.append()=0
#     numerator.append()=0
def digit(a):
    number=a
    out=0
    while(number>=1):
        number/=10
        out+=1
        
    return out

numerator=[3]
denominator=[2]
count=0

for i in range (1,1001):
    denominator.append(numerator[i-1]+denominator[i-1])
    numerator.append(denominator[i]+denominator[i-1])
    if digit(denominator[i]) < digit(numerator[i]):
       count+=1 
print(count)

#Thank you Phyton