#include<bits/stdc++.h>
using namespace std;

int main(){
	long n;
	cin>>n;
	vector<long long> a(n);
	for(long i=0;i<n;i++){
		cin>>a[i];
	}
	long long moves=0;
	for(long i=1;i<n;i++){
		if(a[i]<a[i-1]){
			moves+=a[i-1]-a[i];
			a[i]=a[i-1];
		}
	}
	cout<<moves<<endl;
}