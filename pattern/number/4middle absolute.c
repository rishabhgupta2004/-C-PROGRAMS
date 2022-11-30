#include<stdio.h>
#include<conio.h>
int main(){
	int n,i,j,k,z=1;
	printf("enter  no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=n;j>=i;j--){
			printf(" ");
		}
		for(k=1;k<=z;k++){
			printf("%d",abs(k-i));
		}
		z+=2;
		printf("\n");
	}
	return 0;
	
}

