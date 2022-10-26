#include<stdio.h>
#include<conio.h>
int main(){
	long int a ,m=1;
	printf("a::"); 
	scanf("%1d",&a);
	while(a>0){
		m=a*m;
		a--;
	}
	printf("fact: %1d",m);
	return 0;
}
