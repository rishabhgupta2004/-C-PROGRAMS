#include<stdio.h>
#include<conio.h>
int main(){
	int i,j;
	for(i=0;i<7;i++){
		for(j=0;j<7;j++){
			if(j<i){
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
