#include<stdio.h>
#include<conio.h>
int main(){
	int bill,percent,discount,pay;
	printf("enter your bill amount/n");
	scanf("%d",&bill);
	if(bill>=1000&&bill<=2000){
		percent=(bill*3)/100;
		discount=percent+100;
		pay=bill-discount;
		printf("you  have to pay %d \n",pay);
	}
	else if(bill>=2000&&bill<=3500){
		percent=(bill*5)/100;
		discount=percent+200;
		pay=bill-discount;
		printf("you  have to pay %d \n",pay);
	}
	else if(bill>=3500&&bill<=5000){
		percent=(bill*7)/100;
		discount=percent+300;
		pay=bill-discount;
		printf("you  have to pay %d \n",pay);
	}
	else if (bill>=5000&&bill<=20000){
		percent=(bill*10)/100;
		discount=percent+500;
		pay=bill-discount;
		printf("you  have to pay %d \n",pay);
	}
	else{
		printf("sorry !you have not get any dicount");
		
	}
	return 0;
}
