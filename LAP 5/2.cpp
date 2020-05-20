#include <stdio.h>
int main(){
	int n,i;
	float x = 0;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	for(i = 1; i <= n; i++){
			x += 1/(float)i;
		}
		printf("Tong S la %f",x);
}
