def nextround (a):
    return 1/(a- int(a))
    
def pivot(a,count):
    count+=1
    b=nextround(a)
    if(count==2):
        return b
    pivot(b,count)    


# print(23.**(1./2.))
# print(nextround(23.**(1./2.)))

def recur(a,count,p):
    count+=1
    b=nextround(a)
    print('%d %f' %(int(a), round(b,5)))
    if(p==round(b,5)):
        print (count)
        return 0
    recur(b,count,23.**(1./2.))
    

# pivot(23.**(1./2.),0)
# print(pivot(23.**(1./2.),0))
# p=round(temp,5)
recur(7.**(1./2.),0,p)