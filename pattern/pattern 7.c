#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=1;i<=10;i++){
		for(j=1;j<=10;j++){
			if(i==1||i==j||j==10||i==10||j==1){
				printf("0");
			}
			else{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}
