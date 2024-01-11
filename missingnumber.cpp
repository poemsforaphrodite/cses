#include <bits/stdc++.h>
using namespace std;
 
int main(){
    long long n, total, answer, meow;
    cin>> n;
    total = n*(n+1)/2;
    for(long long i= 0;i<n-1;i++){
        cin>>meow;
        total -= meow;
    }
    answer = total;
    cout<<answer;
}