#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,k;
	printf("enter  no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n-1;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		printf("\n");
	}
	return 0;
	
}

