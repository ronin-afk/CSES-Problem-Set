#include<bits/stdc++.h>
using namespace std;

vector<string> grey(int n){
    if(n==1){
        return {"0","1"};
    }
    vector<string> front = grey(n-1);
    vector<string> back = front;
    reverse(back.begin(), back.end());

    for(string &c : front){
        c = "0" + c;
    }
    for(string &c : back){
        c = "1" + c;
    }
    front.insert(front.end(), back.begin(), back.end());
    return front;
}

int main(){
    int n;
    cin >> n;
    vector<string> ans = grey(n);
    for(string c : ans){
        cout << c << "\n";
    }
}