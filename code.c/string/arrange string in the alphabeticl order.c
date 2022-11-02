#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char str[10],temp;
	int i,j,len=0;
	printf(" enter any string :\n");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		for(j=i+1;j<len;j++){
			if(str[i]>str[j]){
				temp=str[j];
				str[j]=str[i];
				str[i]=temp;
			}
		}
	}
	printf("string in the alphabetical order is:\n");
	puts(str);
	return 0;
}

