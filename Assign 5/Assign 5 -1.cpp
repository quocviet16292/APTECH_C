#include <stdio.h>
int main(){
	int a,b,sum = 0;
	do{
		printf("Nhap vao so thu 1: \n");
		scanf("%d",&a);
		printf("Nhap vao so thu 2 lon hon so thu 1:\n");
		scanf("%d",&b);
	}while(a>=b);
	for(int i = a; i <= b ; i++){
		sum += i;
	}
	printf("Tong cac so tu %d den %d la %d",a,b,sum);
}
