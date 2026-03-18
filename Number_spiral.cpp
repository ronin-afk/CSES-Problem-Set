#include<bits/stdc++.h>
using namespace std;

int main(){
	long long t;
	cin>>t;
	while(t--){
		long y,x;
		cin>>y>>x;
		if(y>=x){
			long long n=(y*y)-y+1;
			if(y%2==0){
				cout<<n+y-x<<endl;
			}
			else{
				cout<<n-y+x<<endl;
			}
		}
		else{
			long long n=(x*x)-x+1;
			if(x%2==0){
				cout<<n+y-x<<endl;
			}
			else{
				cout<<n-y+x<<endl;
			}
		}
	}
}