#include <bits/stdc++.h> 
void haepify(vector<int> &arr, int n, int i){
    int s = i;
    int l = 2*i+1;
    int r = 2*i+2;

    if(l<n && arr[s] > arr[l]){
        s = l;
    }
    if(r<n && arr[s] > arr[r]){
        s = r;
    }
    if(s != i){
        swap(arr[s], arr[i]);
        haepify(arr,n,s);
    }
}

vector<int> buildMinHeap(vector<int> &arr)
{
    // Write your code here
    int n =  arr.size();
    for(int i=n/2-1 ;i>=0;i--){
        haepify(arr,n, i);

    }
    return arr;
}
