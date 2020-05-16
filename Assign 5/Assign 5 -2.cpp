#include <stdio.h>
int main(){
	int n,x=0;
	do{
		printf("Nhap vao 1 so nguyen duong: \n");
		scanf("%d",&n);
	}while(n<=0);
	for (int i = n; i > 0; i/=10){
		x++;
	}
	printf("So %d co tong cong %d chu so",n,x);
}
