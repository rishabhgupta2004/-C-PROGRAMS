#include<stdio.h>
#include<conio.h>
int main(){
	int salary,tax,package1,package2;
	printf("enter your salary \n");
	scanf("%d",&salary);
//	package=salary*12;
//	printf("your annualy package is %d",package);
	if(salary>=7500&&salary<=15000){
		package1=salary*12;
		printf("your package is  %d",package1);
		printf("you have to pay 3.5% tax");
		tax =(package1*3.5)/100;
		printf("your tax is %d",tax);
		package2=package1-tax;
		printf("now you package is %d ",package2);
		
	}
	else if (salary>15000&&salary<=25000){
		package1=salary*12;
		printf("your package is  %d",package1);
		printf("you have to pay 4.5% tax");
		tax =(package1*4.5)/100;
		printf("your ax is %d",tax);
		package2=package1-tax;
		printf("now you package is %d ",package2);
		
	}
	else if (salary>25000&&salary<=35000){
		package1=salary*12;
		printf("your package is  %d",package1);
		printf("you have to pay 5.5% tax");
		tax =(package1*5.5)/100;
		printf("your tax is %d",tax);
		package2=package1-tax;
		printf("now you package is %d ",package2);
		
	}
	else if (salary>35000&&salary<=100000){
		package1=salary*12;
		printf("your package is  %d",package1);
		printf("you have to pay 7% tax");
		tax =(package1*7)/100;
		printf("your tax is %d",tax);
		package2=package1-tax;
		printf("now you package is %d ",package2);
		
	}
	else{
		printf("you are under survilance");
	}
	}

