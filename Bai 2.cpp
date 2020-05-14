#include<stdio.h>
int main(){
	int n;
	do{
	printf("Nhap vao so nguyen duong n ");
    scanf("%d",&n);	
	}while(n<0);
	printf("Nhap vao so nguyen duong n ");
	scanf("%d",&n);
	if(n<0){
		printf("Hay nhap lai");
		return 0;
		}
	float sum=0;
	for(int i=1;i<=n;i++){
	    sum+=(float)1/i;
 	}
 	printf("Tong S la %f",sum);
}
