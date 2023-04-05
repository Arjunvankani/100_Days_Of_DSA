#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int tc;cin>>tc;
	
	while(tc--){
	    int x,y;cin>>x>>y;
	    int k = 1;
	    int ct=0;
	   while(y<x){
	       y = y+k;
	       k++;
	       ct++;
	   }
	   cout<<ct<<endl;
	    
	}
	return 0;
}
