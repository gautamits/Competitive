class Solution:
    # @param A : list of strings
    # @return a strings
    def longestCommonPrefix(self, A):
        if len(A)==1:
            return A[0]
        i=0
        while True:
            for arr in A[1:]:
                try:
                    if arr[i]==A[0][i]:
                        continue
                    else:
                        return A[0][:i]
                except:
                    return A[0][:i]
            i+=1
        return A[0]