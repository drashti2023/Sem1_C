#include<stdio.h>
int main(){
	int n;
	printf("Enter number:");
	scanf("%d",&n);
	while(n>=1000){
		printf("M");
		n=n-1000;
	}
	while(n>=900){
		printf("CM");
		n=n-900;
		
	}
	while(n>=500){
		printf("D");
		n=n-500;
	}
	while(n>=400){
		printf("CD");
		n=n-400;
	}
	while(n>=100){
		printf("C");
		n=n-100;
	}
	while(n>=90){
		printf("XC");
		n=n-90;
	}
	while(n>=50){
		printf("L");
		n=n-50;
	}
	while(n>=40){
		printf("XL");
		n=n-40;
	}
	while(n>=10){
		printf("X");
		n=n-10;
	}
	while(n>=9){
		printf("IX");
		n=n-9;
	}
	while(n>=5){
		printf("V");
		n=n-5;
	}
	while(n>=4){
		printf("IV");
		n=n-4;
	}
	while(n>=1){
		printf("I");
		n=n-1;
	}
}