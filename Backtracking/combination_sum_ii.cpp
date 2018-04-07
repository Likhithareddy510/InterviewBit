//  https://www.interviewbit.com/problems/combination-sum-ii/

vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    
    set<vector<int> > res;
    
    int n = A.size();
    int lim = pow(2, n);
    
    for(int i=0;i<lim;i++) {
        vector<int> temp;
        int sum = 0;
        for(int j=0;j<n;j++) {
            if(i&(1<<j)) {
                sum += A[j];
                temp.push_back(A[j]);
            }
            if(sum==B) {
                sort(temp.begin(), temp.end());
                res.insert(temp);
            }
        }
    }
    vector<vector<int> > out;
    set<vector<int> > :: iterator it;
    for(it=res.begin();it!=res.end();it++) {
        out.push_back(*it);
    }
    return out;
    
}

