#include <stdio.h>
int main(){
	int n,sum = 0;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	for(int i = n; i > 0; i /=10){
		sum += i%10;
	}
	printf("Tong cac chu so cua so %d la %d",n,sum);
}
