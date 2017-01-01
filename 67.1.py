def upup(i,j,value,number):
    
    if i==0 and j==0:
        return value
    
    if j==0:
        for k in range(i-1,-1,-1):
            value+=number[k][0]
            # print number[k][0]
        # print value, "left"
        return value
    
    if i==j:
        for k in range(i-1,-1,-1):
            value+=number[k][k]
            # print number[k][k],
        # print value,"right"
        return value
    
    if number[i-1][j-1]>=number[i-1][j]:
        value+=number[i-1][j-1]
        # print number[i-1][j-1],number[i-1][j],"left",
        # print value
        i=i-1
        j=j-1
        # print i,j
    
    else:
        value+=number[i-1][j]
        # print number[i-1][j-1],number[i-1][j],"right",
        # print value
        i=i-1
    upup(i,j,value,number)


my_file=open("67.txt",'r')

matrix=[[i for i in range(0,100)] for i in range(0,100)]

for i in range(0,100):
    matrix[i]=my_file.readline()

number=[[0 for i in range(0,100)] for i in range(0,100)]
for i in range(0,100):
    for j in range(0,i+1):
        number[i][j]=int(matrix[i][3*j])*10+int(matrix[i][3*j+1])
    # print i,number[i]
        
value=[number[99][i] for i in range(0,100)]

for i in range(0,100):
    # print value[i]
    # print i,
    value[i]=upup(99,i,value[i],number)
    # print value[i]
    # print "switch"
    
    
result=0
for b in range(0,99):
    if value[b]>result:
        result=value[b]
print result