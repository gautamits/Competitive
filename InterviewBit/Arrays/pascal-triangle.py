class Solution:
    # @param A : integer
    # @return a list of list of integers
    def generate(self, A):
        if A==0:
            return []
        if A == 1:
            return [[1]]
        ans=[[1],[1,1]]
        arr=[1,1]
        while len(arr) < A:
            arr=[1]+arr
            for i in range(1,len(arr)-1):
                arr[i]=arr[i]+arr[i+1]
            ans.append(arr)
        return ans

