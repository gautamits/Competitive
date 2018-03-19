int Solution::gcd(int A, int B) {
    if(A==0 || B==0) return A+B;
    int mi,ma;
    if (A<B){
        mi=A;
        ma=B;
    }
    else{
        mi=B;
        ma=A;
    }
    if (ma%mi==0) return mi;
    else return gcd(mi,ma%mi);
}
