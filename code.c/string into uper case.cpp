#include<string.h>
#include<stdio.h>
int main(){
	char string[1000];
	printf("input a string  to convert a upper case \n");
	gets(string);
	printf("characters in upper case : %s \n",strupr(string));
	return 0;
}
