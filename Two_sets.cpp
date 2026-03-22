#include <bits/stdc++.h>
using namespace std;

int main() {
    long n;
    cin>>n;
    long long sum = n*(n+1)/2;
    if(sum%2!=0){
        cout<<"NO"<<endl;
    }
    else{
        vector<long> s1;
        vector<long> s2;
        long long k=sum/2;
        for(long i=n;i>0;i--){
            if(i<=k){
                s1.push_back(i);
                k=k-i;
            }
            else{
                s2.push_back(i);
            }
        }
        cout<<"YES"<<endl;
        cout<<s1.size()<<endl;
        for(auto i: s1){
            cout<<i<<" ";
        }
        cout<<endl;
        cout<<s2.size()<<endl;
        for(auto i: s2){
            cout<<i<<" ";
        }
    }
}
