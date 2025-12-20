#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	int a[10],b[10],A,B;
	int len_a=0,len_b=0;
	scanf("%d %d",&A,&B);
	while(A!=0){
		a[len_a]=A%10;
		len_a++;
		A=A/10;
	}
	while(B!=0){
		b[len_b]=B%10;
		len_b++;
		B=B/10;
	}
	int i=0,j=0,temp;
	int carry=0,ans_carry=0;
	while(i<len_a&&j<len_b){
		temp=a[i]+b[i]+carry;
		if(temp>=10){
			carry=1;
			ans_carry++;
		}
		else{
			carry=0;
		}
		i++;j++;
	}
	while(i < len_a){
		int temp = a[i] + carry;
		if(temp >= 10){
			carry = 1;
			ans_carry++;
		}else{
			carry = 0;
		}
		i++;
	}
	while(j < len_b){
		int temp = b[j] + carry;
		if(temp >= 10){
			carry = 1;
			ans_carry++;
		}else{
			carry = 0;
		}
		j++;
	}
	if(ans_carry==0){
		printf("No carry operation.");
	}
	if(ans_carry==1){
		printf("1 carry operation.");
	}
	if(ans_carry>=1){
		printf("%d carry operations.",ans_carry);
	}
	return 0;
}
