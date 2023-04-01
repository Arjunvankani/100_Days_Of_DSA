#include <sstream> 
#include<bits/stdc++.h>
string reverseString(string str)
{
    vector<string>res;
    
    string ans="";
    stringstream s(str); 

    string words;  
    while(s >> words){           
        res.push_back(words);
    }   

    reverse(res.begin(),res.end());
    for(auto it:res)
    {
        ans.append(it);
        ans.append(" ");
    }
    return ans;
}
