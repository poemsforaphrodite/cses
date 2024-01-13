#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

int main(){
ll n;
cin>>n;
ll sum = n*(n+1)/2;
if(sum%2==1){
    cout<<"NO";
    return 0;
}else{
    cout<<"YES\n";
    set<ll> s1,s2;
    ll target = sum/2;
    int t = n;
    for(int i=1 ;i<=n;i++){
        s1.insert(i);
    }
    while(s1.count(target)==0){
        s2.insert(t);
        s1.erase(t);
        target-=t;
        t--;
    }
    s1.erase(target);
    s2.insert(target);
    cout<<s1.size()<<"\n";
    for(auto i:s1){
        cout<<i<<" ";
    }
    cout<<"\n";
    cout<<s2.size()<<"\n";
    for(auto i:s2){
        cout<<i<<" ";
    }
}
return 0;
}