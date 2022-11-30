#include<stdio.h>
#include<conio.h>
int main(){
    int i,j;
    int a [3][3];
    printf("enter the values of 3x3 matrix:");
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<=2;i++){
        for(j=0;j<=2;j++){
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}