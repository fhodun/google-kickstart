#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
    cin>>t;
    int ans[t] = {};
    for(int i=0; i<t; i++){
    	int n, h[100]={};
		cin>>n;
		for(int j=0; j<n; j++){
			cin>>h[j];
		}
		for(int j=1; j<n-1; j++){
			if(h[j-1]<h[j]&&h[j+1]<h[j])
			ans[i]++;
		}
    }
    
	for(int i=0; i<t; i++){
    	cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
    
	return 0;
}
