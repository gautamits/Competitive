class Solution:
    # @param A : integer
    # @return a list of integers
    def fact(self,a):
        if a==0 or a==1:
            return 1
        return a*self.fact(a-1)
    def comb(self,n,m):
        return self.fact(n)/(self.fact(n-m)*self.fact(m))
    def getRow(self, A):
        ans=[]
        if A==0: 
            return [1]
        for i in range(A):
            ans.append(self.comb(A,i))
        return ans+[1]
