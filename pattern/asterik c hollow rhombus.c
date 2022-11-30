#include<stdio.h>
#include<conio.h>
int main(){
	int i,j,k;
	for(i=1;i>=8;i--){
		for(j=1;j<=8-1;j++){
			for(k=1;k<=8;k++){
				if(i==1||i==8||k==1||k==8){
					printf("*");
				}
				else{
					printf(" ");
				}
			}
			primtf("\n");
		}
	}
	return 0;
}
