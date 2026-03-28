#include<bits/stdc++.h>
using namespace std;
int ans=0;
bool is_safe(vector<string> &board,int r,int c){
	if(board[r][c]=='*'){
		return false;
	}
	for(int i=c-1;i>=0;i--){
		if(board[r][i]=='q'){
			return false;
		}
	}
	int i=r,j=c;
	while(i>=0&&j>=0){
		if(board[i][j]=='q'){
			return false;
		}
		i--;j--;
	}
	i=r,j=c;
	while(i<8&&j>=0){
		if(board[i][j]=='q'){
			return false;
		}
		i++;j--;
	}
	return true;
}

void solve(vector<string> &board,int c){
	if(c==8){
		ans++;
		return;
	}
	for(int i=0;i<8;i++){
		if(is_safe(board,i,c)) {
    	board[i][c] = 'q';
    	solve(board, c+1);
    	board[i][c] = '.';
}
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