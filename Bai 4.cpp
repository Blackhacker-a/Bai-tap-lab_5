#include<stdio.h>
int main(){
    int n;
    int count=2;
	do{
	printf("Nhap vao so nguyen duong n ");
    scanf("%d",&n);	
	}while(n<0);
    for(int i=2;i<n;i++){
    	if(n%i==0){
		   count++;
        }
    }
    if (count>2){
    	printf("n la hop so");
    	}
    else{
    	printf("n so nguyen to");
	}	
    










}  
