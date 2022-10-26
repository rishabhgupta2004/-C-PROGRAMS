#include<stdio.h>
#include<conio.h>
int main(){
	int  num,t ,i=1;
	printf("enter the number");
	scanf("%d",&num);
	while(i<=10){
		t=i*num;
		printf("\n %d * %d =%d ",num,i,t);
		i++;
		
	}
	return 0;
}
