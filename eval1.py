fact=1
count=1
sum=0
for i in range(60):
  sum+=(1.0/(fact*count))
  print i,fact
  fact=fact*count
  count+=1
print 1+sum