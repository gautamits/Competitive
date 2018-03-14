vector<int> Solution::spiralOrder(const vector<vector<int> > &A) {
    vector<int> sol;
    int t=0;
    int l=0;
    int b=A.size()-1;
    int r=A[0].size()-1;
    //cout<<t<<l<<b<<r<<endl;
    int dir=0;
    while(t<=b && l <= r){
        if(dir==0){
            //cout<<"going right\n";
            for(int i=l;i<=r;i++) sol.push_back(A[t][i]);
            t+=1;
            dir=1;
        }
        else if(dir==1){
            //cout<<"going down\n";
            for(int i=t;i<=b;i++) sol.push_back(A[i][r]);
            r-=1;
            dir=2;
        }
        else if(dir==2){
            //cout<<"going left\n";
            for(int i=r;i>=l;i--) sol.push_back(A[b][i]);
            b-=1;
            dir=3;
        }
        else if(dir==3){
            //cout<<"going to top\n";
            for(int i=b;i>=t;i--) sol.push_back(A[i][l]);
            l+=1;
            dir=0;
        }
    }
    return sol;



}
