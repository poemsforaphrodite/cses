#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int maxi=INT_MIN,count =0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]==s[i+1]){
            count++;
        }else{
            maxi=max(maxi,count);
            count=0;
        }
    }
    cout<<maxi+1;
}