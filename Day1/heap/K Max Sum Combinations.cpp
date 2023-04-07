#include <bits/stdc++.h> 
vector<int> kMaxSumCombination(vector<int> &a, vector<int> &b, int n, int k){
	// Write your code here.
	priority_queue<pair<int,pair<int,int>>> mp;

	sort(a.begin(),a.end(), greater<int>());
	sort(b.begin(),b.end(), greater<int>());
	
	vector<int> res;
	vector<vector<int>> m(n,vector<int>(n,0));
        mp.push({a[0] + b[0], {0,0}});
		m[0][0] = 1;

		while(k--){
			int t = mp.top().first;
			int i= mp.top().second.first;
			int j = mp.top().second.second;
			res.push_back(t);
			mp.pop();

			if(j+1<n && m[i][j+1] == 0){
				mp.push({a[i]+b[j+1], {i,j+1}});
				m[i][j+1] = 1;
			}
			if(i+1 <n && m[i+1][j] == 0){
				mp.push({a[i+1]+b[j], {i+1,j}});
				m[i+1][j] = 1;
			}
		}
		return res;
}
