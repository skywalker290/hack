#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
		int n;
		cin>>n;
		int arr[n];
		int count=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
			if(arr[i]<0) count++;
		}
		for(int i=0;i<n;i++){
			if(i<count){
				arr[i]=-(abs(arr[i]));
			}else{
				arr[i]=abs(arr[i]);
			}
		}
		for(auto x:arr){
			if(x<arr[0]){
				cout<<"NO"<<endl;return;
			}
			arr[0]=x;
		}
		cout<<"YES"<<endl;

}


void show(){
	cout<<"tell mw my name ";
	int n;
	cin>>n;
	cout<<"It was a trap;";
	cout<<"ITS CRAZY";
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
