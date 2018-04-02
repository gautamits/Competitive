int Solution::hammingDistance(const vector<int> &A) {
    long long int sum=0;
    int count;
    for(int i=0;i<31;i++){
        count=0;
        for(int j=0;j<A.size();j++){
            if( A[j] & ( 1 << i)) count+=1;
        }
        sum+=2*count*(A.size()-count);
        sum=sum%1000000007;
    }
    return sum;
}
