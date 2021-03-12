#include <bits/stdc++.h> 
using namespace std;

int main()
{
	int t;
    cin>>t;
    int ans[t] = {};
    for(int i=0; i<t; i++){
    	int n;
		float b, a[100000]={};
		cin>>n>>b;
		for(int j=0; j<n; j++){
			cin>>a[j];
		}
		sort(a, a + n);
		for(int j=0; j<n; j++){
			if(b-a[j]>=0){
				b-=a[j];
				ans[i]++;
			}
		}
    }
    
	for(int i=0; i<t; i++){
    	cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
    
	return 0;
}
