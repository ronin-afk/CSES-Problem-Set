#include<bits/stdc++.h>
using namespace std;

string curr;
set<string> ans;

void solve(string &S, vector<bool> &visit){
	if(curr.size()==S.size()){
		ans.insert(curr);
		return;
	}
	for(int i=0;i<S.size();i++){
		if(visit[i]){continue;}
		visit[i]=true;
		curr.push_back(S[i]);
		solve(S,visit);
		curr.pop_back();
		visit[i]=false;
	}
}

int main(){
	string S;
	cin>>S;
	vector<bool> visit(S.size(), false);
    solve(S, visit);
    cout << ans.size() << endl;
    for(auto x : ans)
        cout << x << endl;
}