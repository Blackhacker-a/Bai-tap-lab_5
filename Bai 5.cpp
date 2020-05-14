#include<stdio.h>

int main()
{
    int n;
	do{
	printf("nhap so thu tu n cua so hang trong day Fibonacci: ");
    scanf("%d", &n);
	}while(n<0);
    
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2){
	printf("So hang thu nhat va thu hai cua day Fibonacci la %d ",a1);
	}
	else if(n<0){
		printf("Nhap lai di nhe");
	    }
	else{
	int s = 3;
    int a;
    while (s <= n){
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        s++;
    }
    printf("So hang thu %d cua day Fibonacci la: %d", n, a);
    }    
}

