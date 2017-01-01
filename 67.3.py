def upup(i,j,number):
    if number[i+1][j+1]<number[i+1][j]:
        number[i][j]+=number[i+1][j]
    else:
        number[i][j]+=number[i+1][j+1]



my_file=open("67.txt",'r')

matrix=[[i for i in range(0,100)] for i in range(0,100)]

for i in range(0,100):
    matrix[i]=my_file.readline()

number=[[0 for i in range(0,100)] for i in range(0,100)]
for i in range(0,100):
    for j in range(0,i+1):
        number[i][j]=int(matrix[i][3*j])*10+int(matrix[i][3*j+1])
    # print i,number[i]

for i in range(98,-1,-1):
    for j in range(0,i+1):
        upup(i,j,number)
print number[0][0]
# always question
# fuck I did it