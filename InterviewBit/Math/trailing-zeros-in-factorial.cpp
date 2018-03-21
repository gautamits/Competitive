int Solution::trailingZeroes(int A) {
    int ans=0;
    int i=1;
    while(pow(5,i)<=A){
        ans+=A/pow(5,i);
        i+=1;
    }
    return ans;
}
