class Solution
{
public:
void solve(int ind,int sum, vector<int> & arr, int N, vector<int> &ans){
    if(ind == N){
        ans.push_back(sum);
        return;
    }
    
    solve(ind+1,sum+arr[ind],arr,N,ans);
    solve(ind+1,sum,arr,N,ans);
}
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        
        vector<int> ans;
        
        solve(0,0,arr,N,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};
