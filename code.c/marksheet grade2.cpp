#include<stdio.h>
#include<conio.h>
int main(){
	int m ;
	printf("enter your marks\n");
	scanf("%d",&m);
	if(m>=0&&m<=40){
	
	printf("you are fail");
}
else if(m>=40&&m<=50){

printf("you are pass");
}
else if (m>=50&&m<=70){
	printf("you are passed");
}
else if (m>=70&&m<=80){
	printf("you are passed with b grade");
}
else  if(m>=80&&m<=90){
	printf("you are passed with a grade");
}
else if  (m>=90&&m<100){
	printf(" you are passed with honor ");
}
else{
	printf("study in previous class");
}
}
