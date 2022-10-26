#include<stdio.h>
#include<string.h>
int main(){
	char string[1000];
	printf("input a string  to convert a lower case \n");
	gets(string);
	printf("characters in lower case : %s \n",strlwr(string));
	return 0;
}
