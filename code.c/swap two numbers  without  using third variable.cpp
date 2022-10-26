#include<stdio.h>
#include<conio.h>
int main(){
	int a,b;
	printf("enter the number a: \n b:");
	scanf("%d %d",&a,&b);
	printf("before swap a =%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n after swap a =%d b=%d",a,b);
	return 0;
}
