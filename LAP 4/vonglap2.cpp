#include <stdio.h>
int main(){
	int n;
	printf("Nhap so nguyen bat ki: \n");
	scanf("%d",&n);
	int m,du;
	m=0;
	for(n;n!=0;n/=10){
		du = n % 10;
		m = m * 10 + du;
		}
	printf("So nguyen dao nguoc la %d",m);
}
