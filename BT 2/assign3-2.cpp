#include <stdio.h>

int main(){
	int n,i;
	n = 4000;
	for(i=1;i<=4;i++,n = n * 1.08);
	printf("So tien nhan dc sau 4 nam la %d",n);
}
