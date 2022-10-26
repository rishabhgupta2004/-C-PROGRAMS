#include<string.h>
#include<stdio.h>
void functionupper(char[]);
int main(){
	char string[1000];
	printf("enter the string  to convert it into upper case \n");
	gets(string);
	functionupper(string);
	printf("enter string in upper case is : %s",string);
	return 0;
}
void functionupper(char s[])
{
	int c=0;
	while(s[c]!='\0'){
		if(s[c]>='a'&&s[c]<='z'){
			s[c]=s[c]-32;
		}
		c++;
	}
}
