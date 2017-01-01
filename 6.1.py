sumofsquares=0

for i in range (1,101):
    sumofsquares+=i**2
    
squareofsum=0

for i in range (1,101):
    squareofsum+=i
    
squareofsum=squareofsum**2

print('%d',squareofsum-sumofsquares)