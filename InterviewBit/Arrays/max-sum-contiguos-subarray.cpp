//kadane's algorithm
int Solution::maxSubArray(const vector<int> &A) {
    int max = INT_MIN, max_current = 0;
    int size=A.size();
    for (int i = 0; i < size; i++)
    {
        max_current += A[i];
        if (max < max_current)
            max = max_current;
 
        if (max_current < 0)
            max_current = 0;
    }
    return max;
}
