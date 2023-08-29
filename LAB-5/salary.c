#include<stdio.h>
void main(){
	float a,b;
	printf("Enter the Basic Salary:");
	scanf("%f",&a);
	if(a>= 10000&& a<20000){
		printf("Gross Salary =%f", b=a+(a*0.2)+(a*0.8));
	}
	if(a>= 20000 && a<30000){
		printf("Gross Salary =%f", b=a+(a*0.25)+(a*0.9));
	}
	if(a>= 30000){
		printf("Gross Salary=%f", b=a+(a*0.3)+(a*0.95));
	}
}
