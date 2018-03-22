vector<vector<int> > Solution::diagonal(vector<vector<int> > &A) {

    vector<vector<int>> result;
    vector<int> diagonal;
    
    int n = A.size();
    if(n == 0)
        return result;
    for(int s = 0; s <= 2*(n-1); s++) {
       for(int i = 0; i <= s; i++) {
           int j = s - i;
           if(i >= n || j >= n)
                continue;
           diagonal.push_back(A[i][j]);
       }
       result.push_back(diagonal);
       diagonal.clear();
   }
   return result;
}
