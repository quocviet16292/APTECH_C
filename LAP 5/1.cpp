#include <stdio.h>
int main(){
	int n,i,x = 1;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	for(i = 1; i <= n; i++){
		x *= i;
	}
	printf("%d giai thua co gia tri la: %d",n,x);
}
