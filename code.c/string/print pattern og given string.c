#include<stdio.h>
#include<conio.h>
int main(){
	int i=0,j=0;
	char s[40];
	printf("\n\n\t enter the word U want to format:>>");
	gets(s);
	for(i=0;s[i]!='\0';i++){
		for(j=0;j<=i;j++){
			printf("%c",s[j]);
		}
		printf("\n");
	}
	return 0;
}
