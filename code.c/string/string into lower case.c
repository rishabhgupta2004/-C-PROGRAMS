#include<stdio.h>
#include<conio.h>
int main(){
	 int i=0;
	 char s1[20],s2[20];
	 printf("enter a string:>>");
	 gets(s1);
	 while(s1[i]!='\0'){
	 	if(s1[i]>=65&&s1[i]<=90){
	 		s2[i]=s1[i]+32;
		 }
		 else{
		 	s2[i]=s1[i];
		 }
		 i++;
	 }
	 s2[i]='\0';
	 printf("\n lower case string: %s",s2);
	 return 0;
}
