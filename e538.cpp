#include<iostream>
#include<algorithm>
//#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main ()
{
	int n,d,r;
	while(1){
		cin>>n>>d>>r;
		if(n==0&&d==0&&r==0){
			break;
		}
		vector<int>go,back;
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			go.push_back(tmp);
		}
		for(int i=0;i<n;i++){
			int tmp;
			cin>>tmp;
			back.push_back(tmp);
		}
		sort(go.begin(),go.end());
		sort(back.begin(),back.end(),greater<int>());//¤j¨ì¤p
		int ans=0;
		for(int i=0;i<n;i++){
			int total=go[i]+back[i];
			if(total>d){
				ans+=(total-d)*r;
			}
		}
		cout<<ans<<endl;	
	}
	return 0;
}
