#include<bits/stdc++.h>
	using namespace std;
	#define int long long int
	void solve(){
		int n;
		cin>>n;
		int arr[n];
		map<int,int> m;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			m[arr[i]]++;
		}
		int sum=0;
		for(auto x:m){
			if(x.second>1){
				sum+=x.second-1;
			}	
		}
		if(sum%2==0){
			cout<<n-sum<<endl;
		}else{
			cout<<n-(sum +1)<<endl;
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
