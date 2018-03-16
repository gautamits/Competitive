class Solution:
    def solve(self, A):
        A = sorted(A)
    
        i = 0
        j = len(A)-1
        while i < j-1:
            s = float(A[i]) + float(A[j])
            if i + 1 < len(A) - 1:
                three = s + float(A[i+1])
                if three > 1 and three < 2:
                    return 1
                elif three < 1:
                    i += 1
                else:
                    j -= 1
        return 0
