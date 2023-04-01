
#include <bits/stdc++.h> 
//https://www.codingninjas.com/codestudio/problems/981308?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website

int romanToInt(string s) {
    // Write your code here
    unordered_map<char,int> m;

    m['I'] = 1;
    m['V'] = 5; 
    m['X'] = 10;
    m['L'] = 50; 
    m['C'] = 100; 
    m['D'] = 500;
    m['M'] = 1000;
    
    int n = s.size();
    int num =0;

    num =num+m[s[n-1]];
    
    for(int i=n-2;i>=0;i--){
        if(m[s[i]]>=m[s[i+1]]){
            num+=m[s[i]];
        }else{
            num-=m[s[i]];
        }
    }
    return num;
}
