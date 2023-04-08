#include <bits/stdc++.h> 
void solve(int idx, vector<int> & tmp, vector<vector<int>> &ans, vector<int> &arr, int n){
    ans.push_back(tmp);
    if(idx >= n)return;
    for(int i=idx;i<n;i++){
        if(i> idx && arr[i] == arr[i-1]) continue;
        tmp.push_back(arr[i]);
        solve(i+1,tmp,ans, arr,n);
        tmp.pop_back();
    }
}
vector<vector<int>> uniqueSubsets(int n, vector<int> &arr)
{
    // Write your code here.
    if(n ==0) return{};
    sort(arr.begin(), arr.end());
    vector<int> tmp;
    vector<vector<int>> ans;
    solve(0,tmp, ans, arr, n);
    return ans;
}
