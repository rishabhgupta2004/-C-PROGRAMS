#include<stdio.h>
#include<string.h>
#define MAX_SIZE 100
int main(){
	char string[MAX_SIZE];
	int alphabets,digits,specialcharacters,i;
	alphabets=digits=specialcharacters=i=0;
	printf("enter your string");
	gets(string);
	while(string[i]!='\0'){
		if((string[i]>='a'&&string[i]<='z')||(string[i]>='A'&&string[i]<='Z')){
			alphabets++;
		}
		else if(string[i]>='0'&&string[i]<='9'){
			digits++;
			
		}
		else{
			specialcharacters++;
		}
		i++;
	}
	printf("total alphabets: %d\n",alphabets);
		printf("total digits: %d\n",digits);
			printf("total specialcharacters: %d\n",specialcharacters);
			return 0;
}
