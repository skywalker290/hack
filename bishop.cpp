#include<bits/stdc++.h>
using namespace std;
#define int long long int
int getIndex(string v, char K)
{
    auto it = find(v.begin(), v.end(), K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        int index = it - v.begin();
        return index;
    }
    
}
void solve(){
	int flag=0;
	for(int i=0;i<8;i++){
		string s;
		cin>>s;
		if(flag==1) continue;
		char c='#';
		int co=count(s.begin(),s.end(),c);
		if(co==1 && i !=0){
			// cout<<s<<endl;
			cout<<i+1<<" "<<getIndex(s,c)+1<<endl;
			flag=1;
		}
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
