#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	int i;
	char str[100];
	printf("enter a string:>>");
	gets(str);
	for(i=0;i<strlen(str);i++){
		printf("%c\t%d\n",str[i],str[i]);
	}
	return 0;
}
