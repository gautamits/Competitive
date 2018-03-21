class Solution:
    def convertToTitle(self,A):
        alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        ans = ""
        while A > 0 :
            temp = A%26
            #print temp, A
            if temp == 0 :
                temp = 26
                A = A - 1
            ans = alphabet[int(temp-1)] + ans
            A = A//26
        return ans

