#include<stdio.h>
#include<conio.h>
int main(){
	char str[100],ch;
	int n,count=0;

	printf("\n enter the string:");
	while(1){
		ch=getch;
		if(ch==13){
			break;
		}
		str[count]=ch;
		count++;
	}
	printf("\n entered string :%s",str);
	return 0;
}
