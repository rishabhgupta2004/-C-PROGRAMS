#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=1;i<=20;i++){
		for(j=1;j<=20;j++){
			if(i==1||i==20||j==1||j==20){
				printf("*");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
}
