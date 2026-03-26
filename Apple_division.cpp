#include<bits/stdc++.h>
using namespace std;

long long ans = LLONG_MAX;
vector<long long> p;
int n;

void solve(int i, long long sum1, long long total){

    if(i == n){
        long long sum2 = total - sum1;
        ans = min(ans, abs(sum1 - sum2));
        return;
    }

    solve(i+1, sum1 + p[i], total); // include
    solve(i+1, sum1, total);        // exclude
}

int main(){

    cin >> n;

    p.resize(n);

    long long total = 0;

    for(int i=0;i<n;i++){
        cin >> p[i];
        total += p[i];
    }

    solve(0,0,total);

    cout << ans << endl;
}