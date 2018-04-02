class Solution:
    # @param A : string
    # @return an integer
    def isPalindrome(self, A):
        A=A.lower()
        import re
        regex=re.compile('[^a-zA-Z0-9]')
        A=regex.sub('', A)
        if A==A[::-1]:
            return 1
        else:
            return 0
