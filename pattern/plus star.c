#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	for(i=1;i<=10;i++){
		if(i==(10/2)+1){
			for(j=1;j<=10;j++){
				printf("*");
			}
		}
		else{
			for(j=1;j<=10/2;j++){
				printf(" ");
			}
			printf("*");
		}
		printf("\n");
		
	}
	return 0;
}
