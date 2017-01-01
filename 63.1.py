import time

def digit(a):
    d=0
    while(a>=1):
        a=a/10
        d+=1
        
    return d
    
start =time.time()

count=0

for i in range (1,10):
    notfound=1
    temp=1
    nth=0
    while(notfound):
        temp=temp*i
        nth+=1
        if(digit(temp)==nth):
            print i
            count+=1
        if(digit(temp)==nth-1):
            notfound=0
            
        

print count
end=time.time()

print "The time spent is %f second" %(end-start)

#sophisticated mind