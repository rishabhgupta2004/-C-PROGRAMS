#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int length;
	printf("enter the string :\n");
	gets(str);
	length=strlen(str);
	printf("length of entered string is :%d\n",length);
	return 0;
}
