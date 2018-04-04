#!/bin/python3

import os
import sys
def weightedUniformStrings(s, queries):
    res=set()
    i=0
    while i < len(s):
        j=i
        while j < len(s) and s[j]==s[i]:
            res.add((ord(s[i])-96)*(j+1-i))
            j+=1
        i=j
    ans=[]
    for i in queries:
        if i in res:
            ans.append("Yes")
        else:
            ans.append("No")
    return ans
        

if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    s = input()

    queries_count = int(input())

    queries = []

    for _ in range(queries_count):
        queries_item = int(input())
        queries.append(queries_item)

    result = weightedUniformStrings(s, queries)

    fptr.write('\n'.join(result))
    fptr.write('\n')

    fptr.close()
