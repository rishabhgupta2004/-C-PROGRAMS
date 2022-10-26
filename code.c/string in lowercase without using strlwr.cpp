#include<string.h>
#include<stdio.h>
void functionlower(char[]);
int main(){
	char string[1000];
	printf("enter the string  to convert it into lower case \n");
	gets(string);
	functionlower(string);
	printf("enter string in lower case is : %s",string);
	return 0;
}
void functionlower(char s[])
{
	int c=0;
	while(s[c]!='\0'){
		if(s[c]>='A'&&s[c]<='Z'){
			s[c]=s[c]+32;
		}
		c++;
	}
}
