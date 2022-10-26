#include<stdio.h>
#include<conio.h>
int main(){
	int marks;
	printf("enter the number\n");
	scanf("%d",&marks);
	if(marks<=100&&marks<=90){
		printf("you are  excellent you are passed with HONOR");
}
else if(marks>=80&&marks<=90){
	printf("you are passed with A grade");
	
}
else if(marks>=70&&marks<=80){
	printf(" you are passed with B grade");
}
else if(marks>=50&&marks<=80){
	printf("you are passed with  c grade");
}
else{
	printf("you are fail");
}
return 0;
}
