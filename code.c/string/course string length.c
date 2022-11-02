#include<stdio.h>
#include<conio.h>
int main(){
	int  len=0;
	char s[10];
	printf(" enter a string\n");
	gets(s);
	while(s[len]!='\0'){
		len++;
	}
	printf("\n length :%d",len);
	return 0;
	
}
