#include<stdio.h>
int main(){
	int sum=0;
	for(int k=1;k<=100;k++){
		sum+=(2*k-1);
		}
	printf("Tong cua 100 so le dau tien la %d",sum);

}

int main(){
	int sum=0;
	for(int i=0,count=0;count<=100;i++){
		if(i%2!=0){
			sum+=i;
			count++;
		}
	}
	printf("Sum=%d",sum);
}		
