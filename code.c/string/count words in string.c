#include<stdio.h>
#include<conio.h>
int main(){
	int len=0,c=1;
	char s[50];
	printf("enter a string:");
	gets(s);
	while(s[len]!='\0'){
		if(s[len]== ' ')
		c++;
		len++;
	}
	printf("\n total words: %d",c);
	return 0;
}
