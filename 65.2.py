def sum_digits(n):
    s = 0
    while n:
        s += n % 10
        n //= 10
    return s


def flip(numerator,denominator,nth,es):
    # print numerator,denominator,
    nth+=1
    tempn=numerator
    tempd=denominator
    denominator=tempn
    numerator=tempd+tempn*es[98-nth]
    print nth,es[98-nth],numerator,denominator
        
    if nth==98:
        print sum_digits(numerator)
        print sum_digits(denominator+numerator*2)
        return 0
        
    else:
        flip(numerator,denominator,nth,es)
        
es=[]
for i in range(0,100):
    if i%3==1:
        es.append(int(2*(i/3+1)))
    else:
        es.append(1)
    # print i,es[i]
# print es[98]

numerator=1
denominator=1

nth=0
flip(numerator,denominator,nth,es)

# Beautiful is better than ugly