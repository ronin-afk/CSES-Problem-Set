#include<bits/stdc++.h>
using namespace std;

int main(){
    long n;
    cin>>n;
    vector<long> a(n-1);
    long sum=0;
    for(long i=0;i<n-1;i++){
        cin>>a[i];
        sum+=a[i];
    }
    long ans= long(n*(n+1))/2 -sum;
    cout<<ans<<endl;
}