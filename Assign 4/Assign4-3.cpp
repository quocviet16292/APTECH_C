#include <stdio.h>
int main(){
	int n;
	printf("Nhap so bat ki: \n");
	scanf("%d",&n);
	int sum = 0;
	if(n>=0){
		for(int i = 0;i<=n;i++){
		sum = sum + i;
		}
		printf("Tong cac so tu 1 den %d la %d",n,sum);
	}
	else{
			printf("Phai nhap vao so tu nhien");
	}
	}
