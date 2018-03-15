int Solution::solve(vector<int> &A) {
    int n=A.size()-1;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++){
        if(A[i]==A[i+1]) continue;
        if(A[i]==n-i) return 1;
    }
    if(A[n]==0) return 1;
    return -1;
}
