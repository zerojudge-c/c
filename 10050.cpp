#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int t;
	cin>>t;
	while(t--){
		int n,p;
		cin>>n;
		cin>>p;
		vector<int>days(n+1);
		for(int i=0;i<p;i++){
			int pi;
			cin>>pi;
			for(int j=pi;j<n+1;j+=pi){
				days[j]++;
			}
		}
		int h=0;
		for(int i=0;i<n+1;i++){
			if(days[i]>0 && (i%7!=6 && i%7!=0)){
				h++;
			}
		}
		cout<<h<<endl;
	}
	return 0;
}
