#include<bits/stdc++.h>
using namespace std;
int main (void)
{
	int n;
	while(cin>>n){
		int total = 0;
		while(n>1){
			if(n==2){
				n++;
			}
			total += n/3;
			n = n%3 + n/3;
		}
		
	}
	return 0;
}
