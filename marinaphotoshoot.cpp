#include<bits/stdc++.h>
using namespace std;
#define int long long int
int countFreq(string pat, string txt)
{
    int M = pat.length();
    int N = txt.length();
    int res = 0;
 
    /* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++) {
        /* For current index i, check for
           pattern match */
        int j;
        for (j = 0; j < M; j++)
            if (txt[i + j] != pat[j])
                break;
 
        // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
        if (j == M) {
            res++;
        }
    }
    return res;
}

void solve(){
		int n;
		cin>>n;
		string s;
		string a="aaaa";
		cin>>s;
		// cout<<s;
		int c1=countFreq("aaa","a");
		int c2=countFreq(s,"010");
		cout<<c2<<endl;
}
int32_t main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
