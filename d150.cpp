#include<iostream>
#include<algorithm>
// #include<bits/stdc++.h>
using namespace std;

int main (){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int p[n]={0};
		for(int i=0;i<n;i++){
			cin>>p[i];
		}
		/* 
		vector<int>p;
		p.push_back();
		p[i];
		p.begin();
		p.end();
		p.size();
		*/
		sort(p,p+n,greater<int>());
		
		int res=0;
		for(int i=2/*3-1*/;i<n;i+=3){
			res+=p[i];
		}
		cout<<res<<endl;
	}
	return 0;
} 
