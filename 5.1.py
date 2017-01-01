def evenlydivisiable (a):
    for i in range(1,21):
        if number%i !=0:
            return 0
    return a

a=1
number=1

while a==1:
    if evenlydivisiable(number):
        print("%d",number)
        a=0
    number=number+1