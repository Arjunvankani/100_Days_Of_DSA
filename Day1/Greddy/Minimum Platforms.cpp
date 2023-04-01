//https://practice.geeksforgeeks.org/problems/minimum-platforms-1587115620/1#

class Solution{
    public:
    //Function to find the minimum number of platforms required at the
    //railway station such that no train waits.
    int findPlatform(int arr[], int dep[], int n)
    {
    	sort(arr,arr+n);
    	sort(dep,dep+n);
    	int count=1;
    	int i=1;
    	int j=0;
    	while(i<n){
    	    if(arr[i]<=dep[j])
    	        count++;
    	    else
    	        j++;
    	        i++;
    	}
    	return count;
    }
};
