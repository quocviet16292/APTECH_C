#include <stdio.h>
int main(){
	int a,b,c;
	do{
		printf("Nhap vao canh thu nhat: \n");
		scanf("%d",&a);
		printf("Nhap vao canh thu hai: \n");
		scanf("%d",&b);
		printf("Nhap vao canh thu ba: \n");
		scanf("%d",&c);
	}while(a+b<=c||a+c<=b||b+c<=a);
	printf("Day  la tam giac \n");
}
