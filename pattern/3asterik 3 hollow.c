#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	for(i=10;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=1;k<=10;k++){
			if(i==1||i==10||k==1||k==10){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
