#include<stdio.h>
#include<conio.h>
int main(){
	int a ,b;
	printf("enter the value of a  and b :");
	scanf("%d %d",&a,&b);
	printf("before swap  a=%d b=%d",a,b);
	a=a*b;
	b=a/b;
	a=a/b;
	printf("\n after the swap a=%d b=%d",a,b);
	return 0;
}
