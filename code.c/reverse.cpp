#include<stdio.h>
#include<conio.h>
int main(){
int i,j;
i=5;
while(i>=1)
{
	j=i;
	while(j>=1){
		printf("%d",i);
		j--;
	}
	i--;
	printf("\n");
}
	return 0;	
}
