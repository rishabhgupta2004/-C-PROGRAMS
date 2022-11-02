#include<stdio.h>
#include<conio.h>
int main(){
	int upper=0,lower=0,i=0,i;
	char ch[50];
	
	
	printf("enter a string:");
	gets(ch);
	while(ch[i]!='\0'){
		if(ch[i]>='A'&&ch[i]<='Z'){
			upper++;
			if(ch[i]>='a'&& ch[i]<='z')
			lower++;
			i++;
		}
	}
	printf("\n lowercase letters are: %d",upper);
	printf("\n lowercase letters are :%d",lower);
}
