import re   
s = raw_input()
k = raw_input()
pat = re.compile(k)
r = pat.search(s)
if not r: print "(-1, -1)"
while r:
    print "({0}, {1})".format(r.start(), r.end() - 1)
    r = pat.search(s,r.start() + 1)
