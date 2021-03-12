#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
    cin>>t;
    int ans[t] = {};
    for(int i=0; i<t; i++){
    	int n, k, s; // n - num of levels, k - current level, s - sword level
		cin>>n>>k>>s;
		ans[i]+=k-1;
		if(s>k-s){
			ans[i]+=(k-s)+(n-s)+1;
			cout<<"(k-s): "<<k-s<<"(n-s):"<<n-s<<endl;
		} else {
			ans[i]+=1+n;
		}
    }
    
	for(int i=0; i<t; i++){
    	cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
    
	return 0;
}
