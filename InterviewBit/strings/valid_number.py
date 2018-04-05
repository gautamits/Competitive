class Solution:
    # @param A : string
    # @return an integer
    def isNumber(self, A):
        decimal=False
        exponent=False
        sign=False
        visit=False
        digits=False
        for (j,i) in enumerate(A):
            if ord(i)==32:
                continue
            if (ord(i)==43 or ord(i)==45) and visit==False:
                continue
            elif (ord(i)==43 or ord(i)==45) and A[j-1]=='e':
                if A[j-1]=='.':
                    return 0
                continue
            if i=='e':
                if A[j-1]=='.':
                    return 0
                if exponent==False:
                    exponent=True
                else:
                    return 0
            elif i=='.':
                if exponent==True or decimal==True:
                    return 0
                else:
                    decimal=True
            elif ord(i) < 48 or ord(i) > 57:
                return 0
            elif ord(i) >= 48 and ord(i) <= 57:
                digits=True
            else:
                continue
            visit=True
        if A[-1]=='.':
            return 0
        if digits:
            return 1
        else:
            return 0