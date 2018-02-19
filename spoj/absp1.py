# your code goes here
t=int(raw_input())
while t > 0:
  n=raw_input()
  m=map(int,raw_input().split())
  n=len(m)
  s=0
  i=n-1
  while i >= 0:
    s+=m[i]*i-(n-1-i)*m[i]
    i-=1
  print s
  t-=1