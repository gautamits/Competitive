class Solution:
    # @param A : integer
    # @return a list of strings
    def fizzBuzz(self, A):
        A=list(range(1,A+1))
        for i in range(0,len(A)):
            if (i+1)%3==0 and (i+1)%5==0:
                A[i]="FizzBuzz"
            elif (i+1)%3==0:
                A[i]="Fizz"
            elif (i+1)%5==0:
                A[i]="Buzz"
            
        return A
