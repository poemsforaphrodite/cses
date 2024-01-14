#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    while(n--){
        long long int a,b;
        cin>>a>>b;
        if(b<a)swap(a,b);
        if(a==b && a%3 ==0){
            cout<<"YES"<<endl;
        }else if(a == b/2 && b%a == 0){
            cout<<"YES"<<endl;
        }else if(a == (b+3)/2&&b%a ==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }   
    return 0 ;
}
