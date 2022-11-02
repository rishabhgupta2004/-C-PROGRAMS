#include<stdio.h>
#include<conio.h>
int main(){
	int len=0,i,vowel=0;
	char s[100],ch;
	printf("enter any string:");
	fflush(stdin);
	gets(s);
	while(s[len]!='\0'){
		len++;
	}
	for(i=0;i<=len;i++){
		ch=s[i];
		if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'||ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
			vowel++;
		}
	}
	printf("total vowel is =%d",vowel);
	return 0;
}
