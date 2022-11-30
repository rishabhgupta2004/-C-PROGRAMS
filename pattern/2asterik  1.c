#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j;
	printf("enter number of rows");
	scanf("%d",&n);
	for( int i=0;i<=n;i++){
		for( int j=0;j<=n;j++){
			printf("*");
		}
		printf("\n");
	}
	
}
