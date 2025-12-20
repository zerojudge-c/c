#include<stdio.h>
#include<stdlib.h>
int rome(char a)
{
	int num;
	if(a=='I'){
		num=1;
	}
	else if(a=='V'){
		num=5;
	}
	else if(a=='X'){
		num=10;
	}
	else if(a=='L'){
		num=50;
	}
	else if(a=='C'){
		num=100;
	}
	else if(a=='D'){
		num=500;
	}
	else if(a=='M'){
		num=1000;
	}
	return num;
}
int main (void)
{
	int i,num1,num2,end;
	char a[20],b[20];
	for(;;){
		num1=0,num2=0,end=0;
		scanf("%s",a);
		if(a[0]=='#'){
			break;
		}
		scanf("%s",b);
		for(i=0;a[i]!='\0';i++){
			if(a[i+1]!='\0'){
				if(rome(a[i])>=rome(a[i+1])){
					num1+=rome(a[i]);
				}
				else if(rome(a[i])<rome(a[i+1])){
					num1+=(rome(a[i+1])-rome(a[i]));
				i++;
				}
			}
			else{
				num1+=rome(a[i]);
			}
			
		}
		for(i=0;b[i]!='\0';i++){
			if(b[i+1]!='\0'){
				if(rome(b[i])>=rome(b[i+1])){
					num2+=rome(b[i]);
				}
				else if(rome(b[i])<rome(b[i+1])){
					num2+=(rome(b[i+1])-rome(b[i]));
				i++;
				}
			}
			else{
				num2+=rome(b[i]);
			}
			
		}
		if(num1>=num2){
			end=num1-num2;
		}
		else if(num1<num2){
			end=num2-num1;
		}
		if(end==0){
			printf("ZERO\n");
			continue;
		}
		for(;;){
			if(end==0){
				printf("\n");
				break;
			}
			if(end>=1000){
				printf("M");
				end-=1000;
			}
			else if(end>=500){
				if(end>=900){
					printf("CM");
					end-=900;
				}
				else{
					printf("D");
					end-=500;
				}	
			}
			else if(end>=100){
				if(end>=400){
					printf("CD");
					end-=400;
				}
				else{
					printf("C");
					end-=100;
				}
			}
			else if(end>=50){
				if(end>=90){
					printf("XC");
					end-=90;
				}
				else{
					printf("L");
				end-=50;
				}
			}
			else if(end>=10){
				if(end>=40){
					printf("XL");
					end-=40;
				}
				else{
					printf("X");
					end-=10;
				}
			}
			else if(end>=5){
				if(end>=9){
					printf("IX");
					end-=9;
			}
				else{
					printf("V");
					end-=5;
				}	
			}
			else if(end>=1){
				if(end>=4){
					printf("IV");
					end-=4;
			}
				else{
					printf("I");
					end-=1;
				}	
			}
	}
}
	return 0;
}
