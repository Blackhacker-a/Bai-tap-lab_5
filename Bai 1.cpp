#include<stdio.h>

int main() {
	int n;
	do{
	printf("Nhap vao so nguyen duong n ");
    scanf("%d",&n);	
	}while(n<0);
    int k=1;
    for(int i=1;i<=n;i++){
        k=k*i;
    }
    printf("n giai thua la %d",k);
    return 0;
    }
 	
 	
 	
 	
 	
 	

