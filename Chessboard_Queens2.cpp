#include<bits/stdc++.h>
using namespace std;
int ans=0;
vector<bool> row(8),top_diag(15),bottem_diag(15);

void solve(vector<string> &board,int c){
	if(c==8){
		ans++;
		return;
	}
	for(int r=0;r<8;r++){
		if(board[r][c]=='*') continue;
		if(row[r] || top_diag[r-c+7] || bottem_diag[r+c]) continue;
		row[r]=top_diag[r-c+7]=bottem_diag[r+c]=true;
		solve(board,c+1);
		row[r]=top_diag[r-c+7]=bottem_diag[r+c]=false;
	}
}

int main(){
	 vector<string> board(8);
	 for(int i=0;i<8;i++){
	 	cin>>board[i];
	 }
	solve(board,0);
	cout<<ans<<endl;
}