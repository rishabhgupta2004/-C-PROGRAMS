#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char str1[1000],str2[1000];
	printf("enter the first string\n");
	gets(str1);//reading first string from user
		printf("enter the second string\n");
	gets(str2);//reading second string from user
	strcat (str1,str2);
	printf("string obtained on concantentaion is:%s",str1);
	return 0;
	 
	 
}
