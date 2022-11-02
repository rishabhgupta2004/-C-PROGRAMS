#include<stdio.h>
#include<conio.h>
int main(){
	int count1=0,count2=0,flag=0,i;
	char string1[10],string2[10];
	printf(" enter a string:");
	gets(string1);
	printf(" enter another string:");
	gets(string2);
	while(string1[count1]!=' ')
	count1++;
	while(string2[count2]!=' ')
	count2++;
	i=0;
	while((i<count1)&&(i<count2)){
		if (string1[i]==string2[i]){
			i++;
			continue;
		}
		if(string1[i]<string2[i]){
			flag=-1;
			break;
		}
		if(string1[i]>string2[i]){
			flag=1;
			break;
		}
	}
	if (flag==0)
	printf("both strings are equal");
	if(flag==1)
	printf("string1 is greater then string2",string1,string2);
	if(flag==-1)
	printf("string1 is less than string2",string1,string2);
}
