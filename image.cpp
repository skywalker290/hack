#include<bits/stdc++.h>
using namespace std;
#define int long long int
#define pb push_back
void solve(){
	string a,b;
	cin>>a>>b;
	map<char,int> m;
	for(auto x:a){
		m[x]++;
	}
	for(auto x:b){
		m[x]++;
	}
	int c=m.size();
	switch(c){
		case 1:
			cout<<0<<endl;
			break;
		case 2:
			cout<<1<<endl;
			break;
		case 3:
			cout<<2<<endl;
			break;
		case 4:
			cout<<3<<endl;
			break;
	}

}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
