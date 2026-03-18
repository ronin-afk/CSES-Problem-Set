#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	long count=1,maxi=1;
	for(long i=1;i<s.size();i++){
		if(s[i]==s[i-1]){
			count++;
		}
		else{
			maxi=max(maxi,count);
			count=1;
		}
	}
	maxi=max(maxi,count);
	cout<<maxi<<endl;
}