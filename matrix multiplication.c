#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,a[3][3],b[3][3],c[i][j];
    printf("enter the value of  1 matrix:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("enter the value of 2 matrix:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("--------your 1 matrix is--------\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf(" --------your second matrix is------------\n");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
    printf("--------sum of given matrix is-------\n");
    for(i=0;i<=2;i++){
    	for(j=0;j<=2;j++){
    		c[i][j]=a[i][j]*nb[i][j];
    		printf("%d ",c[i][j]);
		}
		printf("\n");
	}
    return 0;
    }
