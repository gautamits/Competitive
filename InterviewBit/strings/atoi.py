class Solution:
    # @param A : string
    # @return an integer
    def atoi(self, A):
        ans=0
        neg=False
        for i in A:
            if ord(i) <= 57 and ord(i) >= 48:
                ans=ans*10+(ord(i)-48)
            elif ord(i)==43:
                continue
            elif ord(i)==45:
                neg=True
            else:
                break
        if neg:
            ans = ans*-1
        if ans > 2147483647:
            return 2147483647
        if ans < -2147483648:
            return -2147483648
        return ans