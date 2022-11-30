#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
		if(j<7-i-1){
			printf(" ");
		}
		else{
			
		
			printf("*");
		}
	}
	printf("\n");
}
	return 0;
}
