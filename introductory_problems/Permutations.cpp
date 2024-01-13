#include <iostream>
#define ll long long
#define fr(i, n) for (ll i = 0; i < n; i++)
using namespace std;
 
int main()
{
    ll n;
    cin >> n;
    if(n==0||n==2||n==3){cout<<"NO SOLUTION";return 0;}
    if(n==1){cout<<1;return 0;}
    ll arr[n];
    for(ll i =1;i<=n;i++){arr[i-1]=i;}
   // for(ll i =0;i<n;i++){cout<<arr[i];}
    long long first, second;
    if(n%2!=0){
        first = n/2-1;
        second = n/2+1;
        //cout<<arr[first]<<arr[second];
    }else{
        first = n/2 -2;
        second = n/2;
    }
 
    for(ll i = 0;i<n-1;i++){
        //cout<<second<<" "<<first<<" "<<endl;
        if(i%2==0){
            cout<<arr[second]<<" ";
            second++;
        }else{
            cout<<arr[first]<<" ";
            first--;
        }
    }
    if(n%2!=0){
    cout<<arr[n/2];}else{
        cout<<arr[n/2-1];
    }
    return 0;
 
 
 
}