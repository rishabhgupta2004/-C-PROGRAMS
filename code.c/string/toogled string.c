#include<stdio.h>
#include<conio.h>
int main(){
	int len=0,i;
	char a[40],b[40];
	printf(" ENTER ORIGINAL STRING:");
	gets(a);
	while(a[len]!='\0')
		len++;
		for(i=0;i<len;i++){
			if(a[i]>'A'&&a[i]<='Z'){
				b[i]=a[i]+32;
			}
			else if(a[i]>='a'&&a[i]<='z'){
				b[i]=a[i]-32;
			}
			else{
				b[i]=a[i];
			}
		}
		printf("\n toggled string:%s",b);
		return 0;
	
}
