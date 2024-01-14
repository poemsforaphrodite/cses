#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    long long n = s.length();
    unordered_map<char,long long> m;
    for(long long i=0;i<n;i++){m[s[i]]++;}
    string front = "", middle = "", back = "";
    long long odd_count = 0;
    for(auto &i:m){
        //cout<<i.first<<" "<<i.second<<endl;
        if(i.second % 2 != 0) odd_count++;
        if(odd_count > 1) {
            cout << "NO SOLUTION" << endl;
            return 0;
        }
        while(i.second>0){
            if(i.second>1){
                front += i.first;
                back = i.first + back;
                i.second -= 2;
                //cout<<front<<" "<<middle<<" "<<back<<endl;
            }else{
                middle = i.first;
                i.second--;
            }
        }
    }
    cout<<front+middle+back<<endl;
    return 0;
}
