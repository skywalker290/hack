#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
		int n;	
		cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		vector<pair<int,int>> v;
		for (int i = 0; i < n; ++i)
		{
			if(a[i]!=0 && b[i]!=0) v.push_back({a[i],b[i]});
		}
		if(n==0)  {cout<<"YES"<<endl;return;}
		if(n==1){
			a[0]=v[0].first; b[0]=v[0].second;
			if(a[0]!=0 && b[0]!=0){cout<<"NO"<<endl;return;}
			else {cout<<"YES"<<endl;return;}
		}
		int d=a[0]-b[0];
		for (int i = 0; i < v.size(); ++i)
		{
			// cout<<a[i]-b[i]<<endl;
			a[i]=v[i].first; b[i]=v[i].second;
			if(d!=a[i]-b[i] && (a[i]!=0 && b[i]!=0)){
				cout<<"NO"<<endl;return;
			}
		}
		cout<<"YES"<<endl;

}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
