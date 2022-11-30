#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	for(i=10;i>=1;i--){
		for(j=1;j<=i-1;j++){
			printf(" ");
		}
		for(k=1;k<=5;k++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
