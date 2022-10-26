#include<stdio.h>
#include<conio.h>
int main(){
	int n ,s,sum=0,num ;
	printf("n::");
	scanf("%d",&n);
	while(n>0){
		s=num%10;
		sum=sum+s;
		n=n/10;
	}
	printf("sum:%d",sum);
	return 0;
}
