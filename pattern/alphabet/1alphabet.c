#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,k;
	printf("enter  no of rows:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=0;k<=i;k++){
			printf("%c",i+65);
		}
		printf("\n");
	}
	return 0;
	
}

