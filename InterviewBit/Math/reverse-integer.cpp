int Solution::reverse(int A) {
    if(A < 0) return -1*reverse(-1*A);
    int ans=A%10;
    A=A/10;
    while(A>0){
        
        int dig = A%10;
        int maxVal = (INT_MAX-dig)/10;
        if(ans>maxVal){
            return 0;
        }
        ans=ans*10+A%10;
        A=A/10;
    }
    return ans;
    
}
