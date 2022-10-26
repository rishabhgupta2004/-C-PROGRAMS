#include<stdio.h>
#include<conio.h>
int main(){
	int i=1;
	while(i<=10){
		if(i%2==0){
			printf("-%d \t",i*i);
		}
		else{
			printf("%d \t",i*i);
		}
		i++;
	}
	return 0;
}
