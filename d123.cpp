#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int n;
	int m = 1;
	while(cin>>n){
		vector<int>b(n);
		bool check = true;
		for(int i=0;i<n;i++){
			cin>>b[i];
			if(i>0 && b[i-1] >= b[i]){
				check = false;
			}
		}
		vector< bool > sums(20001,false);
		for(int i=1;i<n;i++){
			for(int j=0;j<=i;j++){
				if(sums [b[i]+b[j]] == true){
					check = false;
					//cout<<i<<" "<<endl;
				}
				else{
					sums [b[i]+b[j]] = true;
				}
			}
		}
		if(check){
			cout<<"Case #"<<m<<": It is a B2-Sequence."<<endl<<endl;
		}
		else{
			cout<<"Case #"<<m<<": It is not a B2-Sequence."<<endl<<endl;
		}
		m++;
	}
	return 0;
}
