#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
    cin>>t;
    int ans[t] = {};
    for(int i=0; i<t; i++){
    	long long n, d, x[1000]={}, ilosc;
		cin>>n>>d;
		for(int j=0; j<n; j++){
			cin>>x[j];
		}
		ilosc=(d/x[n-1])*x[n-1];
		for(int j=n-1; j>=0; j--){
			int masno=d/x[j];
			for(int l=masno;l>0;l--)
			{
				if(l*x[j]<=ilosc)
				{
					ilosc=l*x[j];
					l=0;
				}
			}
		}
		ans[i]=ilosc;
    }
    
	for(int i=0; i<t; i++){
    	cout<<"Case #"<<i+1<<": "<<ans[i]<<endl;
	}
    
	return 0;
}
