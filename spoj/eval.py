from decimal import Decimal, getcontext
getcontext().prec = 40 # set the precision to 40 places
e = Decimal(0)
f = Decimal(1)
n = Decimal(1)
while True:
    olde = e
    e += Decimal(1) / f
    if e == olde: # if there was no change in the 40 places, stop.
        break
    f *= n
    n += Decimal(1)
print e
