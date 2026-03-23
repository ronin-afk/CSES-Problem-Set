#include <bits/stdc++.h>
using namespace std;

void solve(int n,int left,int middle,int right){
	if(n==0){return ;}
	solve(n-1,left,right,middle);
	cout<<left<<" "<<right<<endl;
	solve(n-1,middle,left,right);
}

int main(){
	int n;
	cin>>n;
	cout<<(1LL<<n)-1<<endl;
	solve(n,1,2,3);

}