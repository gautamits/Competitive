int Solution::repeatedNumber(const vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout 
www.interviewbit.com/pages/sample_codes/ for more details
    int s = A[0];
    int f = A[A[0]];
    while (s != f) {
        s= A[s];
        f = A[A[f]];
    }
    
    f = 0;
    while (s != f) {
        s = A[s];
        f = A[f];
    }
    return s;
}
