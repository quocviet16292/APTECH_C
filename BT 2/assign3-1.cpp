#include <stdio.h>

int main(){
	int n,m,du;
	printf("Nhap so nguyen duong:\n");
	scanf("%d",&n);
	m = 0;
	if(n<=9999&&n>0){
		while(n>0){
		du = n % 10;
		m = m * 10 + du;
		n = n / 10;
		}
		printf("so dao nguoc la %d",m);
	}
	else{
	printf("So khong hop le");
	}
}
