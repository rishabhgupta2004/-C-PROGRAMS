#include<stdio.h>
#include<conio.h>
int main(){
	long int n,s=0;
	printf("n::");
	scanf("%d",&n);
	while(n>0){
		s=n+s;
		n--;
		
	}
	printf("sum:%ld",s);
	return 0;
}
