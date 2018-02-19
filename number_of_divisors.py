import math
def number_of_divisors(n):
	divisors=1
	i=2
	root=math.sqrt(n)
	counter=0
	while i <= n:
		if n % i == 0:
			print i,counter
			counter+=1
			n=n/i
		else:
			divisors=divisors*(counter+1)
			counter=0
			
			i+=1
	return divisors
	
			
			
def number(n):
	print dic[n]
'''t=int(raw_input(""))
while t > 0 :
	n=int(raw_input(""))
	print number(n)
	t-=1
'''
while True:
	t=int(raw_input("enter the number "))
	print number_of_divisors(t)
