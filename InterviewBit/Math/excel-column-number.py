class Solution:
	# @param A : string
	# @return an integer
	def titleToNumber(self, A):
	    ans=0
	    for i,j in enumerate(A[::-1]):
	        ans+=(ord(j)-64)*26**i
	        #print(ans)
	    return ans
